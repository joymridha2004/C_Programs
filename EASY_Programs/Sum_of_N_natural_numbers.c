#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Sum of first N natural number: %d", num * (num + 1) / 2);
    return 0;
}