#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare two pointers to integers
    // Initially, the pointers do not point to any valid memory location
    int *x;
    int *y;

    // Allocate memory for a new integer and make x point to it
    x = malloc(sizeof(int));

    // Dereference the pointer x and store the value 42 in the memory it points to
    *x = 42;

    // Assign the value of x to y, making y also point to the same memory location as x
    y = x;

    // Dereference the pointer y and store the value 13 in the memory it points to (which is the same as x)
    *y = 13;

    // It's important to free the allocated memory when it's no longer needed
    free(x);

    // It's also good practice to set pointers to NULL after freeing them to avoid dangling pointers
    x = NULL;
    y = NULL;

    return 0;
}
