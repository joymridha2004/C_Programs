#include <stdio.h>
int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    int strong = 0;
    while (temp != 0)
    {
        strong = strong + fact(temp % 10);
        temp /= 10;
    }
    if (strong == num)
    {
        printf("This is strong number");
    }
    else
    {
        printf("This is not strong number");
    }
    return 0;
}