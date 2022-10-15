#include<iostream.h>
#include<conio.h>
int i=1;
void f(int n,char a,char b,char c)
{
	if(n)
	{
		f(n-1,a,c,b);
		cout<<i++<<". "<<a<<" -> "<<c<<"\n";
		f(n-1,b,a,c);
	}
}
void main()
{
	clrscr();
	int n;
	cout<<"Enter number of rings : ";
	cin>>n;
	f(n,'A','B','C');
	getch();
}