#include <stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf("%c", &character);
    int char_value = (int)character;
    if (char_value > 0 && 48 > char_value)
    {
        printf("special character ");
    }
    else if (char_value > 47 && 65 > char_value)
    {
        printf("arithmetic opearater ");
    }
    else if (char_value == 65 || char_value == 69 || char_value == 73 || char_value == 79 || char_value == 85 || char_value == 97 || char_value == 101 || char_value == 105 || char_value == 111 || char_value == 117)
    {
        printf("vowel ");
    }
    else if (char_value > 122 && char_value < 127 || char_value > 90 && char_value < 97)
    {
        printf("other's character ");
    }
    else
    {
        printf("consonant ");
    }
    return 0;
}