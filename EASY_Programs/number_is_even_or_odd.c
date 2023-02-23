#include <stdio.h>
int main()
{
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    num % 2 == 0 ? printf("even number %d ", num) : printf("odd number %d ", num);
    return 0;
}