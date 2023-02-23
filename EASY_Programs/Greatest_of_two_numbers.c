#include <stdio.h>
int main()
{
    int num1, num2;
    printf("\nEnter number1 integer: ");
    scanf("%d", &num1);
    printf("Enter number2 integer: ");
    scanf("%d", &num2);
    num1==num2?printf("Both value are same"):num1 > num2 ? printf("num1 is graterthan num2 ") : printf("num2 is graterthan num1 ");
    return 0;
}