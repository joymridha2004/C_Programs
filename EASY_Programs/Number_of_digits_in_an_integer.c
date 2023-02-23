#include <stdio.h>
int main()
{
    int num;
    printf("Enter integer: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Number of digit : 1");
        return 0;
    }
    int digit_of_Number = 0;
    while (num != 0)
    {
        num /= 10;
        digit_of_Number++;
    }
    printf("Number of digit : %d", digit_of_Number);
    return 0;
}