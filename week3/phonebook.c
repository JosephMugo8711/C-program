#include <cs50.h>   // Include CS50 library for get_string function
#include <stdio.h>  // Include standard I/O library
#include <string.h> // Include string library for strcmp function

// Define a data type called person using a structure
typedef struct
{
    string name;   // String for person's name
    string number; // String for person's phone number
} person;

int main(void)
{
    person people[3]; // Create an array of 3 person structures

    // Initialize the people array with names and numbers
    people[0].name = "Carter";
    people[0].number = "+11111111111";

    people[1].name = "John";
    people[1].number = "+1165898888";

    people[2].name = "Maguru";
    people[2].number = "+19999999999";

    string name = get_string("Name: "); // Prompt user for a name input

    // Iterate over the people array to find a matching name
    for (int i = 0; i < 3; i++)
    {
        // Compare the current person's name with the input name
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number); // Print the corresponding number
            return 0; // Return 0 to indicate success
        }
    }

    printf("Not found\n"); // Print message if name is not found
    return 1; // Return 1 to indicate failure
}


// linear search algorithm
//iterates through each element in the people array one by one, 
// Check if the name matches the input name. 
// Goes through each element sequentially without skipping any, 
// It has a time complexity of O(n), where n is the number of elements in the array.

// make 
// gcc phonebook.c -o phonebook -lcs50
// Directly invoke the GNU Compiler Collection (GCC) to compile phonebook.c and link it with the CS50 library (-lcs50). It produces an executable called phonebook.
// ./phonebook