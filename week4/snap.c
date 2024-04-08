#include <stdio.h>

// Fun prototype for swap function
void swap(int *a, int *b);

// Main Function
int main(void)
{
    //  Declare and initialize variables x and y
    int x = 1;
    int y = 2;


    // Print initial values of x and y
    printf("x is %i, y is %i\n", x, y);
    // Call swap function to swap values of x and y
    swap(&x, &y);

    // Print values of x and y after swap
    printf("x is %i, y is %i\n", x, y);

    // Return 0 to indicate successful execuion
    return 0;

}

// Function definition for swap function
void swap(int *a, int *b)
{
    // Temporary variable to hold the value of a
    int tmp = *a;

    // Assign value of b to a
    *a = *b;

    // Assign value of temporary variable to b
    *b = tmp;
}