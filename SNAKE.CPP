#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
#define BUP	5	//Limit>0
#define BDOWN	20	//Limit<25
#define BLEFT	5	//Limit>0
#define BRIGHT	75	//Limit<81
#define UP 	72
#define DOWN 	80
#define LEFT 	75
#define RIGHT 	77
#define ENTER   13
#define ESC	27
#define BACK 	8
class body
{
	public:
	int x,y;
	body *next;
	body* init();
	void display(body *h);
	body* change(body *h,int i,int j,int add);
	void clear(body *h);
	int ifcut(body *h,int i,int j);
};
body* body::init()
{
	body *h;
	h->x=(BRIGHT+BLEFT)/2;
	h->y=(BDOWN+BUP)/2;
	h->next=NULL;
	return h;
}
void body::display(body *h)
{
	body *p;
	p=h;
	textcolor(GREEN);
	while(p!=NULL)
	{
		gotoxy(p->x,p->y);
		if(p==h)
		cprintf("#");
		else
		cprintf("*");
		p=p->next;
	}
}
body* body::change(body *h,int i,int j,int add)
{
	body *q,*p;
	p=new body;
	q=new body;
	p->x=i;
	p->y=j;
	p->next=h;
	h=p;
	if(!add)
	{
		q=p->next;
		while(q->next!=NULL)
		{
			p=p->next;
			q=p->next;
		}
		delete q;
		p->next=NULL;
	}
	return h;
}
void body::clear(body *h)
{
	body *p;
	p=h;
	while(p!=NULL)
	{
		gotoxy(p->x,p->y);
		printf(" ");
		if(p->x==BLEFT || p->x==BRIGHT)
		{
			textcolor(RED);
			cprintf("\b|");
		}
		p=p->next;
	}
}
int body::ifcut(body *h,int i,int j)
{
	body *q;
	q=h->next;
	while(q!=NULL)
	{
		if(q->x==i && q->y==j)
		{
			return 1;
		}
		q=q->next;
	}
	return 0;
}
void board(int A[10][2])
{
	textcolor(RED);
	for(int i=BLEFT;i<BRIGHT;i++)
	{
		gotoxy(i,BUP);
		cprintf("-");
		gotoxy(i,BDOWN);
		cprintf("-");
	}
	for(i=BUP;i<=BDOWN;i++)
	{
		gotoxy(BLEFT,i);
		cprintf("|");
		gotoxy(BRIGHT,i);
		cprintf("|");
	}
	textbackground(RED);
	for(i=0;i<10;i++)
	{
		gotoxy(A[i][0],A[i][1]);
		cprintf(" ");
	}
	textbackground(YELLOW);
}
int present(int x,int y,int A[10][2])
{
	for(int i=0;i<10;i++)
	{
		if(A[i][0]==x && A[i][1]==y)
		{
			return 1;
		}
	}
	return 0;
}
void main()
{
	textbackground(YELLOW);
	clrscr();
	body *head;
	head=head->init();
	int x=0,y=0,i,j,out=0,score=-5,add=0;;
	int obs[10][2];
	char a=0,b=0;
	for(int p=0;p<10;p++)
	{
		obs[p][0]=1+BLEFT+random(BRIGHT-BLEFT-1);
		obs[p][1]=1+BUP+random(BDOWN-BUP-1);
	}
	board(obs);
	do
	{
		gotoxy(12,3);
		printf("Score : %d",score+=5);
		do
		{
			x=1+BLEFT+random(BRIGHT-BLEFT-1);
			y=1+BUP+random(BDOWN-BUP-1);
		}while(present(x,y,obs));
		gotoxy(x,y);
		textcolor(BLUE+BLINK);
		cprintf("@");
		do
		{
			head->display(head);
			delay(100);
			if(kbhit())
			{
				b=getch();
				switch(b)
				{
					case UP	       :if(a!=DOWN)
							a=b;
							break;
					case DOWN      :if(a!=UP)
							a=b;
							break;
					case LEFT      :if(a!=RIGHT)
							a=b;
							break;
					case RIGHT     :if(a!=LEFT)
							a=b;
							break;
					case ENTER     :a=0;
							break;
					case ESC       :exit(0);
				}
			}
			switch(a)
			{
				case UP:	if(j>BUP+1)j--;
						else j=BDOWN-1;
						break;
				case LEFT:    	if(i>BLEFT+1)i--;
						else i=BRIGHT-1;
						break;
				case DOWN:	if(j<BDOWN-1)j++;
						else j=BUP+1;
						break;
				case RIGHT:	if(i<BRIGHT-1)i++;
						else i=BLEFT+1;
			}
			if((out=present(i,j,obs)||head->ifcut(head,i,j))||(x==i && y==j))
			{
				break;
			}
			head->clear(head);
			head=head->change(head,i,j,0);
		}while(1);
		head=head->change(head,i,j,1);
	}while(!out);
	gotoxy(9,23);
	printf("Game Over !!!\n\tScore : %d",score);
	getch();
}