#include <stdio.h>

int main(void)
{
    // Declare a variable to store the user input size
    int n;

    // Use a do-while loop to ensure the user enters a valid size (at least 1)
    do
    {
        // Prompt the user for the size and read it using scanf
        printf("Size: ");
        scanf("%d", &n);
    } while (n < 1); // Continue the loop until a valid size is entered

    // Nested loops to print a square pattern of '#' characters
    for (int i = 0; i < n; i++) // Outer loop for rows
    {
        for (int j = 0; j < n; j++) // Inner loop for columns
        {
            // Print a '#' character for each column
            printf("#");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    // Return 0 to indicate successful program execution
    return 0;
}
