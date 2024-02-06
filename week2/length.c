#include <cs50.h>
#include <stdio.h>

// Declare the prototype of the helper function
int string_length(string s);

int main(void)
{
    string name = get_string("Name: ");

    // Call the helper function to calculate the length of the string
    int length = string_length(name);

    printf("%i\n", length); // Use %i to print an integer

    return 0; // Indicate successful program execution
}

// Define the helper function to calculate the length of the string
int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n; // Return the calculated length
}
