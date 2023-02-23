#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    int armstrong = 0;
    while (temp != 0)
    {
        armstrong += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    if (armstrong == num)
    {
        printf("This is armstrong number");
    }
    else
    {
        printf("This is not armstrong number");
    }
    return 0;
}