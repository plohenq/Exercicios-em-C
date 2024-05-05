// Prompts a positive integer number and shows a countdown for it.
// Can do a progressive clock of it.
#include <stdio.h>

int main (void)
{
    int num;

    printf("Input an positive integer number: ");
    scanf("%i", &num);

    if (num < 0)
    {
        printf("Error: positive integer number is a must!");

        return 1;
    }
    
    printf("Countdown:\n");
    for (int i = num; i >= 0; i--)
    {
        printf("%i\n", i);
    }
    
    return 0;
}