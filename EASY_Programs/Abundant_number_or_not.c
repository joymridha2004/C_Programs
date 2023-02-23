#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int abundant = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            abundant += i;
        }
    }
    if (num < abundant)
    {
        printf("This is Abundant number ");
    }
    else
    {
        printf("This is not Abundant number ");
    }
    return 0;
}