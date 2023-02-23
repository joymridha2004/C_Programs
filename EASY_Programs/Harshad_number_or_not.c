#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int temp = num;
    int result = 0;
    while (temp != 0)
    {
        result += (temp % 10);
        temp /= 10;
    }
    if (num % result == 0)
    {
        printf("This is harshad number");
    }
    else
    {
        printf("This is not harshad number");
    }

    return 0;
}