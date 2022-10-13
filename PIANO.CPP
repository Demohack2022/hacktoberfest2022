#include<iostream.h>
#include<conio.h>
#include<dos.h>
void play(int x)
{
	sound(x-100);
	for(int i=0;i<500;i++)
	{
		for(int j=0;j<250;j++)
		{
			if(kbhit())
			{
				return;
			}
		}
	}
	nosound();
}
void main()
{
	clrscr();
	char a;
	do
	{
		a=getch();
		switch(a)
		{
			case 'q':play(200);
				break;
			case 'w':play(400);
				break;
			case 'e':play(600);
				break;
			case 'r':play(800);
				break;
			case 't':play(1000);
				break;
			case 'y':play(1200);
				break;
			case 'u':play(1400);
				break;
			case 'i':play(1600);
				break;
			case 'o':play(1800);
				break;
			case 'p':play(2000);
				break;
			case 'a':play(2200);
				break;
			case 's':play(2400);
				break;
			case 'd':play(2600);
				break;
			case 'f':play(2800);
				break;
			case 'g':play(3000);
				break;
			case 'h':play(3200);
				break;
			case 'j':play(3400);
				break;
			case 'k':play(3600);
				break;
			case 'l':play(3800);
				break;
			case 'z':play(4000);
				break;
			case 'x':play(4200);
				break;
			case 'c':play(4400);
				break;
			case 'v':play(4600);
				break;
			case 'b':play(4800);
				break;
			case 'n':play(5000);
				break;
		}
		nosound();
	}while(a!='m');
}