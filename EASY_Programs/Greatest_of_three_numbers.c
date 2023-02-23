#include <stdio.h>
int main()
{
    int num1, num2,num3;
    printf("\nEnter number1 integer: ");
    scanf("%d", &num1);
    printf("Enter number2 integer: ");
    scanf("%d", &num2);
    printf("Enter number3 integer: ");
    scanf("%d", &num3);
    num3>(num1>num2?num1:num2)?printf("num3 is greater number amoung three"):num1>num2?printf("num1 is greater number amoung three"):printf("num2 is greater number amoung three");
    return 0;
}