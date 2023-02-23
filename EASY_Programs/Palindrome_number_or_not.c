#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num;
    int result = 0;
    while (temp != 0)
    {
        result = result * 10 + (temp % 10);
        temp /= 10;
    }
    if (num == result)
    {
        printf("this is palindrome number");
    }
    else
    {
        printf("this is not palindrome number");
    }
    return 0;
}