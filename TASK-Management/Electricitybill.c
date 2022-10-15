// Write a C program to input electricity unit charge and calculate the electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.



#include <stdio.h>
int main(){
   int units;
   float amt,total;
   printf(" Enter no of units consumed : ");
   scanf("%d", &units);
    if(units <= 50)
    {
        amt = units * 0.50;
    }
    else if(units <= 150)
    {
        amt = 25 + ((units-50) * 0.75);
    }
    else if(units <= 250)
    {
        amt = 100 + ((units-150) * 1.20);
    }
    else
    {
        amt = 220 + ((units-250) * 1.50);
    }

   total= amt+ 0.2*amt;
   printf("electricity bill = %.2f", total);
   return 0;
}
