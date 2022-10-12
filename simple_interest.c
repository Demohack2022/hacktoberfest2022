
#include<stdio.h>
  int main()
  {
      float principalamount, rate, simpleinterest;
      int timepr;
      printf("Enter the principal amount: ");
      scanf("%f", &principalamount);
       printf("Enter interest rate in percentage: ");
      scanf("%f", &rate);
       printf("Enter time period in years: ");
      scanf("%d", &timepr);
      printf("****************************************************************************");
      simpleinterest = (principalamount*rate*timepr)/100.0;
      printf("\nAmount = Rs.%5.3f ", principalamount);
      printf("\nRate = Rs.%5.3f ", rate);
      printf("\nTime= %d years", timepr);
      printf("\nSimple Interest = Rs.%5.3f ", simpleinterest);
      return 0;
  }
