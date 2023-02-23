#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf("%c", &character);
    printf("ascii value is : %d", (int)character);
    return 0;
}