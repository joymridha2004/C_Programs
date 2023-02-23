#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter number1 integer: ");
    scanf("%d", &num1);
    printf("Enter number2 integer: ");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("number1 integer is %d\n", num1);
    printf("number2 integer is %d", num2);
    return 0;
}