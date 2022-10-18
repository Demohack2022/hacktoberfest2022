#include<stdio.h>
 
int main()
{
    int ch,qty;
    printf("\n\tMENU CARD");
    printf("\n\t\t1.COFFEE        Rs:15");
    printf("\n\t\t2.TEA           Rs:10");
    printf("\n\t\t3.COLD COFFEE   Rs:25");
    printf("\n\t\t4.MILK SHAKE    Rs:50");
    printf("\n\n Enter Your choice  : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nYou have selected Coffee");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",(qty*15));
        break;
     case 2:
        printf("\nYou have selected Tea");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",(qty*10));
        break;
     case 3:
        printf("\nYou have selected Cold Coffee");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",(qty*25));
        break;
     case 4:
        printf("\nYou have selected Milk Shake");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",(qty*50));
        break;
     default:
          printf("\nInvalid Product Selection");
          break;
 
    }
    return 0;
}
