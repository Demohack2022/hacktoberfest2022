// C Program to Calculate Electricity Bill
#include <stdio.h>
int main(){
    float units, amt, charge, totalamt;
    printf("***************Electricity Bill Calculator***************");
    printf("\nEnter total units consumed:\n ");
    scanf("%f", &units);
    
    if (units<50 && units>0){
        amt = units * 2.00;
        charge =25;
    }
    else if (units>=50 && units<=200){
        amt = units * 3.00;
        charge = 60;
    }
    else if (units>200 && units<=500){
        amt = units * 3.50;
        charge = 75;
    }
    else if (units>500){
        amt = units * 4.00;
        charge = 100;
    }
    else{
            printf("No units consumed ");
        amt=0;
        charge=0;
    }
    
    // Displaying output
    totalamt = amt + charge;
    printf(" Your Electricity Bill is: %.4f", totalamt);
    return 0;
}
