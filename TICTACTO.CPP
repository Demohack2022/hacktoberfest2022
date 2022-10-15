#include<iostream.h>
#include<conio.h>
void display(char A[3][3])
{
	cout<<"\n\t|-----|-----|-----|\n";
	for(int i=0;i<3;i++)
	{
		cout<<"\t|  ";
		for(int j=0;j<3;j++)
		{
			cout<<A[i][j]<<"  |  ";
		}
		cout<<"\n\t|-----|-----|-----|\n";
	}
}
char check(char A[3][3])
{
	char a=' ';
	for(int i=0;i<3;i++)
	{
		if(A[i][0]==A[i][1] && A[i][0]==A[i][2])
		{
			a=A[i][0];
			break;
		}
		else
		{
			if(A[0][i]==A[1][i] && A[0][i]==A[2][i])
			{
				a=A[0][i];
				break;
			}
			else
			{
				if((A[0][0]==A[1][1] && A[0][0]==A[2][2])||(A[0][2]==A[1][1] && A[2][0]==A[1][1]))
				{
					a=A[1][1];
				}
			}
		}
	}
	return a;
}
void main()
{
	
	char A[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '},B[2]={'X','O'},a;
	int x,y,z;
	for(int i=0;i<9;i++)
	{
		
		cout<<"The board is :\n";
		display(A);
		again:
		do
		{
			z=0;
			cout<<"\nEnter co-ordinates for '"<<B[i%2]<<"':\t\tEnter '0' to exit\n";
			cin>>x;
			if(!x)
			{
				break;
			}
			cin>>y;
			if(A[x-1][y-1]!=' ')
			{
				cout<<"\n\t\tInvalid co-ordinates\n";
				z=1;
			}
		}while(z);
		A[x-1][y-1]=B[i%2];
		a=check(A);
		if(a!=' ')
		{
			
			display(A);
			cout<<"\n\t\t"<<a<<" won the match";
			break;
		}
	}
	if(a==' ')
	{
		
		display(A);
		cout<<"\n\t\tMatch is draw";
	}
	
}
