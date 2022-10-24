#include <stdio.h>

int main()
{
  int present_reading,previous_reading;
  double electricity_duty=34.00,electricity_duty_interest=21.25,additional_charges=530.30,interest_on_ACD=6.00;
  scanf("%d%d",&present_reading,&previous_reading);
  int unit=present_reading-previous_reading;
  double energy_charges,additional_services_dues=403.500;
  switch(unit/100){
      case 0:
      energy_charges=unit*4.22;
      break;
      case 1:
      energy_charges=100*4.22+5.02*(unit-100);
      break;
      case 2:
      energy_charges=100*4.22+ 100*5.02 + 5.87*(unit-200);
      break;
      default :
      energy_charges=100*4.22 + 100*5.02 + 100*5.87 +(unit-300)*7.50;
  }
  double total_bill=energy_charges+electricity_duty_interest+electricity_duty+additional_charges+interest_on_ACD;
  printf("\n%lf ",total_bill);
    return 0;
}
