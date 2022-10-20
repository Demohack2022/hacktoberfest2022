#include <stdio.h>

int main()
{
    int number = 1;
    int result, table;
    printf("Which multiplication table would you like to see:\n");
    scanf("%d", &table);
    printf("Here is the table of %d:", table);
    do
    {
        result = table * number;
        printf("\n%d x %d = %d",table, number, result);
        number++;
    } while (number < 11);

    return 0;
}
