#include <stdio.h>
int main()
{
    int base_value, exponent_value;
    printf("Enter the base value: ");
    scanf("%d", &base_value);
    printf("Enter the exponent value: ");
    scanf("%d", &exponent_value);
    int result = 1;
    for (int i = 0; i < exponent_value; i++)
    {
        result *= base_value;
    }
    printf("%d", result);
    return 0;
}