// Declaring pointers to integer numbers
#include <stdio.h>

int main (void)
{
    int num1 = 5, num2 = 10;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Final value of num1: %d\n", num1);
    printf("Final value of num2: %d\n", num2);

    return 0;
}