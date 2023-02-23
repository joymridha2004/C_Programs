#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the number1: ");
    scanf("%d", &num1);
    printf("Enter the number2: ");
    scanf("%d", &num2);
    int perfect1 = 0, perfect2 = 0;
    for (int i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            perfect1 += i;
        }
    }
    for (int i = 1; i < num2; i++)
    {
        if (num2 % i == 0)
        {
            perfect2 += i;
        }
    }
    if (num1 == perfect2 && num2 == perfect1)
    {
        printf("friendly pair");
    }
    else
    {
        printf("not friendly pair");
    }

    return 0;
}