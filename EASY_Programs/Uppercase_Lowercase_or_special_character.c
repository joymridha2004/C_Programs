#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf("%c", &character);
    int char_value = (int)character;
    if (char_value > 64 && 91 > char_value)
    {
        printf(" %c is uppercase character  ", character);
    }
    else if (char_value > 96 && 123 > char_value)
    {
        printf(" %c is lowercase character  ", character);
    }
    else
    {
        printf(" %c is special character ", character);
    }
    return 0;
}