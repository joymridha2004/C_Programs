#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Number of digit : %d", sum);
    return 0;
}