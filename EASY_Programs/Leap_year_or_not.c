#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    year % 4 == 0 ? year % 100 == 0 ? year % 400 == 0 ? printf("this is leap year") : printf("this is not leap year") : printf("this is leap year") : printf("this is not leap year");
    return 0;
}