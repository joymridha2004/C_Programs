#include <stdio.h>
int main()
{
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    int a = 0, b = 1;
    printf("1  2  ");
    while (1)
    {
        int temp = a + b;
        a = b;
        b = temp;
        if (b > num)
        {
            break;
        }
        printf("%d  ", b);
    }
    return 0;
}