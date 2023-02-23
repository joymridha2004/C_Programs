#include <stdio.h>
int reverse(int num)
{
    int result = 0;
    while (num != 0)
    {
        result = result * 10 + (num % 10);
        num /= 10;
    }
    return result;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("this is not Automorphic number ");
        return 0;
    }
    int length = 0, temp = num;
    while (temp != 0)
    {
        temp /= 10;
        length++;
    }
    temp = num * num;
    int result = 0;
    for (int i = 0; i < length; i++)
    {
        result = result * 10 + (temp % 10);
        temp /= 10;
    }
    if (num == reverse(result))
    {
        printf("this is Automorphic number");
    }
    else
    {
        printf("this is not Automorphic number");
    }
    return 0;
}