#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int result = 0;
    while (num != 0)
    {
        result = result * 10 + (num % 10);
        num /= 10;
    }
    printf("%d", result);
    return 0;
}