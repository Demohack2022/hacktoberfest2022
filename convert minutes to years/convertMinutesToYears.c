#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("Please enter the number of Minutes:");

    scanf("%d",&minutesEntered);

    minutesInYear = (60 * 24 * 365);

    years = (minutesEntered / minutesInYear);
    days = (minutesEntered/(60*24));

    printf("%d Minutes is approximately %f years and %f days\n", minutesEntered, years, days);


    return 0;
}