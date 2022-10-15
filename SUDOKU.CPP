#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
int S[9][9];
load()
{
	textbackground(7);
	clrscr();
	textcolor(6);
	printf("\n\n\n\n\n\t\t\t");
	cprintf("Loading.....Please wait");
	printf("\n\n\n\t\t");
	for(int i=0;i<25;i++)
	{
		if(i%8-7)
		{
			textbackground(i);
			sound(i*50+250);
			delay(100);
			cprintf(" ");
			delay(100);
			cprintf(" ");
		}
	}
	nosound();
	getch();
}
pass()
{
	int i=0;
	char a,pass[15];
	printf("\n\n\t\tEnter the password : ");
	a=getch();
	while(a!='\r')
	{
		if(a=='\b')
		{
			if(i)
			{
				printf("\b \b");
				i--;
			}
		}
		else
		{
			printf("*");
			pass[i++]=a;
		}
		a=getch();
	}
	pass[i]=NULL;
	if(strcmp(pass,"qwerty"))
	{
		printf("\n\n\t\t\tACESS DENIED");
		getch();
		exit(0);
	}
	printf("\n\n\t\t\tACESS GRANTED");
	getch();
}
void init(int A[9][9])
{
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			A[i][j]=0;
		}
	}
}
void display(int A[9][9],int x=9,int y=9)
{
	clrscr();
	for(int i=0;i<9;i++)
	{
		if(i%3==0)
		{
			printf("\n\t\t|---|---|---|\t|---|---|---|\t|---|---|---|\n");
		}
		printf("\t");
		for(int j=0;j<9;j++)
		{
			if(j%3==0)
			{
				printf("\t|");
			}
			if(i==x && j==y)
			{
				textbackground(7);
			}
			if(A[i][j])
			{
				if(S[i][j])
				{
					textcolor(4);
				}
				else
				{
					textcolor(2);
				}
				cprintf(" %d ",A[i][j]);
			}
			else
			{
				cprintf("   ");
			}
			textbackground(6);
			textcolor(1);
			printf("|");
		}
		printf("\n\t\t|---|---|---|\t|---|---|---|\t|---|---|---|\n");

	}
}
void input(int A[9][9],int x,int y)
{
	char b;
	do
	{
		sound(3500);
		delay(1);
		nosound();
		b=getch();
		switch(b)
		{
			case'H':if(x)
				{
					x--;
				}
				break;
			case'K':if(y)
				{
					y--;
				}
				break;
			case'P':if(x<8)
				{
					x++;
				}
				break;
			case'M':if(y<8)
				{
					y++;
				}
				break;
			case'\b':exit(0);
		 }
		 if(b>47 && b<58)
		 {
			A[x][y]=S[x][y]=b-48;
		 }
		 display(A,x,y);
	}while(b!='\r');
}
int check(int A[9][9],int a,int i,int j)
{
	for(int x=0;x<9;x++)
	{
		if(((x!=i)&&(A[x][j]==a))||((x!=j)&&(A[i][x]==a)))
		{
				return 0;
		}
	}
	for(x=(i/3)*3;x<((i/3)+1)*3;x++)
	{
		for(int y=(j/3)*3;y<((j/3)+1)*3;y++)
		{
			if(x!=i || y!=j)
			{
				if(A[x][y]==a)
				{
					return 0;
				}
			}
		}
	}
	return a;
}
int solve(int A[9][9],int x,int y)
{
	int temp;
	if(!A[x][y])
	{
		for(int i=1;i<10;i++)
		{
			temp=check(A,i,x,y);
			if(temp)
			{
				A[x][y]=temp;
				if(y==8)
				{
					if(x==8)
					{
						return 1;
					}
					if(solve(A,x+1,0))
					{
						return 1;
					}
				}
				if(solve(A,x,y+1))
				{
					return 1;
				}
			}
		}
		if(i==10)
		{
			if(A[x][y]!=S[x][y])
			{
				A[x][y]=0;
			}
			return 0;
		}
	}
	if(y==8)
	{
		if(x==8)
		{
			return 1;
		}
		if(solve(A,x+1,0))
		{
			return 1;
		}
	}
	if(solve(A,x,y+1))
	{
		return 1;
	}
}
void main()
{
	clrscr();
	load();
	textbackground(6);
	textcolor(1);
	clrscr();
	pass();
	clrscr();
	int x=0,y=0,z;
	int A[9][9];
	init(A);
	textcolor(1);
	display(A,x,y);
	input(A,x,y);
	clrscr();
	if(solve(A,0,0))
	{
		display(A);
		printf("\t\t\t\tSudoku solved");
	}
	else
	{
		printf("\n\n\n\t\t\tImposible Sudoku");
	}
	getch();
}