#include <stdio.h>

// Main function
int main(void)
{
    // Declare  variable n to store user input
    int n; 

    // Prompt the user to enter a value for n
    printf("n: ");

    // Read an integer from the user and store it in the variable n
    scanf("%i", &n); 

    // Print the value of n
    printf("n:  %i\n", n);

    // Return 0 to indicate successful execution
    return 0;
}