#include <cs50.h>       // For get_string function
#include <stdio.h>      // For fprintf and fclose functions
#include <string.h>     // For strlen function

int main(void)
{
    // Open "phonebook.csv" file in append mode ("a" mode)
    FILE *file = fopen("phonebook.csv", "a");

    // Check if the file was opened successfully
    if (file == NULL)
    {
        // Print an error message and return 1 to indicate an error
        printf("Error opening file!\n");
        return 1;
    }

    // Prompt the user for a name and store it in the 'name' variable
    char *name = get_string("Name: ");

    // Prompt the user for a number and store it in the 'number' variable
    char *number = get_string("Number: ");

    // Write the name and number to the file in CSV format (comma-separated values)
    fprintf(file, "%s, %s\n", name, number);

    // Close the file
    fclose(file);

    // Return 0 to indicate successful execution
    return 0;
}
