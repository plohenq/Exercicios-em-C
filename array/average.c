// Prompt for numbers and display they average.
#include <stdio.h>

int main (void)
{
    int n, i;
    float numbers[100], sum = 0, average;

    // Promt the user for the numbers
    printf("Input the quantity of numbers of your choice: ");
    scanf("%d", &n);

    // Checks the vality of the number
    if (n <= 0 || n > 100)
    {
        printf("Error: The number needs to be between 0 and 100");
        return 1;
    }

    // Requests the number
    printf("Input the %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    // Calculates the average
    average = sum / n;

    // Exhibit the average
    printf("The average of the numbers is: %.2f\n", average);

    return 0;
}