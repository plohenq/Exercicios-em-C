// A calculator that prompts two numbers and the operator ('+'. '-', '*', '/').
// Switch cases, Do-While and float
#include <stdio.h>

int main (void)
{
    char op;
    float num1, num2, result;
    int stay;
    
    do
    {
        printf("Input the first number: ");
        scanf("%f", &num1);
        printf("Input the second number: ");
        scanf("%f", &num2);
        printf("Choose the operator ('+'. '-', '*', '/'): ");
        scanf(" %c", &op);

        // Perform the operation and show the results
        switch (op)
        {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f", num1, num2, result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f", num1, num2, result);
            break;
        
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f", num1, num2, result);
            break;
        
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f", num1, num2, result);
            } 
            else
            {
                printf("Error: Not divisible by 0!");
            } 
            break;

        default:
            printf("Invalid operation!");
            break;
        }

        printf("\nContinue? (1 - yes, 0 - no): ");
        scanf("%i", &stay);
    } while (stay == 1);

    printf("Operation Terminated.\n");

    return 0;
}