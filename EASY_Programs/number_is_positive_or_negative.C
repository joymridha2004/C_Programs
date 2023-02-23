#include <stdio.h>
int main()
{
    int num;
    printf("Enter the integer: ");
    scanf("%d", &num);
    num > 0 ? printf("Positive number %d ", num) : printf("Negetive number %d ", num);
    return 0;
}