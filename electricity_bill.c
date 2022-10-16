#include<stdio.h>
#include<stdlib.h>
int main()
{
	float bill, units;
  float extra_charges=50;

	printf("Enter the units consumed=");
	scanf("%f",&units);

	if(units<=50 && units>=0)
	{
		bill=units*3.50+50;
		printf("Electricity Bill=%f Rupees",bill);
	}
	else if(units<=100 && units>50)
	{
		bill=50*3.50+(units-50)*4+50;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else if(units<=250 && units>150)
	{
		bill=50*3.50+100*4+(units-150)*5.20+50;
		printf("Electricity Bill=%f Rupees",bill);

	}

	else if(units>250)
	{
		bill=50*3.50+100*4+100*5.20+(units-250)*6.50+50;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
	return 0;
}
