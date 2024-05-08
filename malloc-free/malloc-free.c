// Dynamic Memory Allocation && Deallocation
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int *ptr;

    // Dynamic allocation for an array of 10 integers
    ptr = malloc(10 * sizeof(int));

    // Verifyng erros of allocation
    if (ptr == NULL)
    {
        printf("Allocation Error");
        
        return 1;
    }
    
    // Manipulating array elements
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i * 2;
        printf("Element %d: %d\n", i, ptr[i]);

    }
    
    // Allocated memory liberation
    free(ptr);

    printf("Memory liberation successfull");
      
    return 0;
}