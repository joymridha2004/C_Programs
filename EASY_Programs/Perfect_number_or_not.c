#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int perfect = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            perfect += i;
        }
    }
    if (num == perfect)
    {
        printf("This is perfect number ");
    }
    else
    {
        printf("This is not perfect number ");
    }
    return 0;
}