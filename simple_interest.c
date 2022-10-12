
#include<stdio.h>
  void main()
  {
      float principalamount, rate, simpleinterest;
      int timepr;
      printf("Enter the value of principal amount:\n");
      scanf("%f", &principalamount);
       printf("Enter the value of rate:\n");
      scanf("%f", &rate);
       printf("Enter the value of time period:\n");
      scanf("%d", &timepr);
      printf("****************************************************************************");
      simpleinterest = (principalamount*rate*timepr)/100.0;
      printf("\nAmount = Rs.%5.3f ", principalamount);
      printf("\nRate = Rs.%5.3f ", rate);
      printf("\nTime= %d years", timepr);
      printf("\nSimple Interest = Rs.%5.3f ", simpleinterest);
      return 0;
  }
