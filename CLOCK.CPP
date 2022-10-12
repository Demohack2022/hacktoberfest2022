#include<iostream.h>
#include<conio.h>
#include<dos.h>
void disp(int s,int x=37,int y=12)
{
	int h=s/3600;
	s-=h*3600;
	int m=s/60;
	s-=m*60;
	gotoxy(x,y);
	if(h<10)
	{
		cout<<"0";
	}
	cout<<h<<" : ";
	if(m<10)
	{
		cout<<"0";
	}
	cout<<m<<" : ";
	if(s<10)
	{
		cout<<"0";
	}
	cout<<s;
}
void main()
{
	int h,m,s,ch,chng;
	char a;
	do
	{
		clrscr();
		cout<<"\n\t\t\tCLOCK\n\n\t\t\tMENU\n\n1.Timer\n2.Stopwatch\n3.Exit\n\nEnter a choice:";
		ch=getch();
		clrscr();
		switch(ch)
		{
			case'1':cout<<"\n\t\t\t\t***** TIMER *****\n\nEnter time duration:\n\nHour\t: ";
				cin>>h;
				cout<<"Minute\t: ";
				cin>>m;
				cout<<"Second\t: ";
				cin>>s;
				gotoxy(25,12);
				cout<<"Time left :";
				s+=60*(m+60*h);
				chng=1;
				a=0;
				do
				{
					if(kbhit())
					{
						a=getch();
						if(a==' ')
						{
							chng=!chng;
						}
					}
					disp(s);
					s-=chng;
					sound(350);
					delay(200);
					nosound();
					delay(800);
				}while(s && a-'\b');
				if(a=='\b')
				{
					break;
				}
				cout<<"\n\n\n\t\t\t\tTime over";
				sound(500);
				getch();
				nosound();
				break;
			case'2':h=m=s=0;
				int clr=1,x=5,y=8;
				chng=1;
				gotoxy(30,2);
				cout<<"***** STOPWATCH *****";
				gotoxy(30,5);
				cout<<"Time :";
				do
				{
					disp(s,37,5);
					delay(500);
					if(kbhit())
					{
						a=getch();
						switch(a)
						{
							case' ':chng=!chng;
								break;
							case'\r':if(y==23)
								{
									y=8;
									x+=20;
								}
								disp(s,x,y++);
								gotoxy(x-3,y-1);
								cout<<(x-5)/20*15+(y-8)<<".";
								break;
						}
					}
					s+=chng;
					delay(500);
				}while(a-'\b' && s<216000);
				getch();
				break;
		}
	}while(ch-'3');
}