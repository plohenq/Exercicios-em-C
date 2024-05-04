// Write a code that needs the user input and verifies if it is a vowel or not

#include <stdio.h>

int main (void)
{
    char c;

    printf("Input char: ");
    scanf("%c", &c);

    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        printf("%c is a vowel\n", c);
    } else
    {
        printf("%c isn't a vowel\n", c);
    }
    
    return 0;
}