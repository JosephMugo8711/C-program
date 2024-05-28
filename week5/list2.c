// Implement a sorted list of numbers using a linked list

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
typedef struct node {
    int number;
    struct node *next;
} node;

// Function prototypes
void insert_sorted(node **list, int number);
void print_list(node *list);
void free_list(node *list);

int main(int argc, char *argv[]) {
    // Initialize the list as empty
    node *list = NULL;

    // Example usage: inserting numbers into the list
    insert_sorted(&list, 5);
    insert_sorted(&list, 2);
    insert_sorted(&list, 9);
    insert_sorted(&list, 3);
    insert_sorted(&list, 7);

    // Print the sorted list
    print_list(list);

    // Free the allocated memory
    free_list(list);

    return 0;
}

// Function to insert a number into the list in sorted order
void insert_sorted(node **list, int number) {
    // Create a new node
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->number = number;
    new_node->next = NULL;

    // Handle the case when the list is empty or the new node should be the first node
    if (*list == NULL || (*list)->number >= number) {
        new_node->next = *list;
        *list = new_node;
    } else {
        // Find the correct position to insert the new node
        node *current = *list;
        while (current->next != NULL && current->next->number < number) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

// Function to print the list
void print_list(node *list) {
    node *current = list;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the allocated memory for the list
void free_list(node *list) {
    node *current = list;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        free(temp);
    }
}
