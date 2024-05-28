#include <stdio.h>
#include <stdlib.h>



typedef struct node 
{
    int number;         // Data part of the node, an integer
    struct node *next;  // Pointer to the next node in the list
} node;                 // Typedef for convenience, to avoid using `struct node` everywhere

int main(int argc, char *argv[])
{
    node *list = NULL;  // Initialize an empty linked list

    // Loop through command-line arguments starting from index 1 (index 0 is the program name)
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);  // Convert command-line argument to integer

        node *n = malloc(sizeof(node));  // Allocate memory for a new node
        if (n == NULL)
        {
            // If memory allocation fails, return with error
            return 1;
        }
        n->number = number;  // Set the data of the new node to the converted integer
        n->next = list;      // Point the new node to the current head of the list

        list = n;  // Update the head of the list to point to the new node
    }

    // Print whole list
    node *ptr = list;  // Temporary pointer to traverse the list, start at the head
    while (ptr != NULL)  // Iterate until the end of the list
    {
        printf("%d\n", ptr->number);  // Print the data of the current node
        ptr = ptr->next;              // Move to the next node
    }

    // Free allocated memory
    ptr = list;  // Reset the pointer to the head of the list
    while (ptr != NULL)  // Iterate through the list
    {
        node *temp = ptr;  // Create a temporary pointer to the current node
        ptr = ptr->next;   // Move to the next node before freeing the current node
        free(temp);        // Free the memory of the current node
    }

    return 0;  // Return success
}
