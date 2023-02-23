#include <stdio.h>
int main()
{
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    int flag = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            flag++;
        }
        if (flag > 2)
        {
            printf("This is not prime number ");
            return 0;
        }
    }
    printf("this is prime number");
    return 0;
}