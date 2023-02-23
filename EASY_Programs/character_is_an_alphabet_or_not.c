#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf("%c", &character);
    int char_value = (int)character;
    if (char_value > 64 && 91 > char_value || char_value > 96 && 123 > char_value)
    {
        printf(" %c is the alphabet ", character);
    }
    else
    {
        printf(" %c is not the alphabet ", character);
    }
    return 0;
}