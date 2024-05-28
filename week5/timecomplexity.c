// add comments explaining big o notation
// 1. 0(N2)
// o(n log n)
/// O(N)
// O(log n)
// o (1)
// O(N^2): This notation represents a quadratic time complexity. It means that the execution time of the algorithm grows proportionally to the square of the input size. This is typically seen in algorithms with nested loops where each loop runs N times.
// O(N log N): This notation represents a time complexity where the execution time grows proportionally to N multiplied by the logarithm of N. This is often seen in more efficient sorting algorithms, such as mergesort and heapsort.
// O(N): This notation represents a linear time complexity. It means that the execution time grows proportionally to the input size. This is common in algorithms that involve a single loop through the input.
// O(log N): This notation represents a logarithmic time complexity. It means that the execution time grows proportionally to the logarithm of the input size. This is common in algorithms that repeatedly divide the problem size in half, such as binary search.
// O(1): This notation represents a constant time complexity. It means that the execution time is constant and does not depend on the input size. This is typical for operations that involve a fixed number of steps.

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Define the node structure for a linked list
typedef struct node {
    int number;
    struct node *next;
} node;

// Function prototypes
void insert_sorted(node **list, int number);
void print_list(node *list);
void free_list(node *list);

void quadratic_example(int N);
void nlogn_example(int array[], int left, int right);
void merge(int array[], int left, int middle, int right);
void linear_example(int array[], int N);
int logarithmic_example(int array[], int size, int target);
void constant_example(int array[], int index);

int main(int argc, char *argv[]) {
    // Initialize the linked list as empty
    node *list = NULL;

    // Example usage: inserting numbers into the list
    insert_sorted(&list, 5);
    insert_sorted(&list, 2);
    insert_sorted(&list, 9);
    insert_sorted(&list, 3);
    insert_sorted(&list, 7);

    // Print the sorted linked list
    print_list(list);

    // Free the allocated memory for the linked list
    free_list(list);

    // Example usage of different time complexity functions
    int N = 10;
    int array[N];

    for (int i = 0; i < N; i++) {
        array[i] = N - i;  // Initialize array for demonstration
    }

    quadratic_example(N);
    nlogn_example(array, 0, N - 1);
    linear_example(array, N);
    logarithmic_example(array, N, 5);
    constant_example(array, 3);

    return 0;
}

// Function to insert a number into the linked list in sorted order (O(N) for each insertion)
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

// Function to print the linked list (O(N))
void print_list(node *list) {
    node *current = list;
    while (current != NULL) {
        printf("%d -> ", current->number);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the allocated memory for the linked list (O(N))
void free_list(node *list) {
    node *current = list;
    while (current != NULL) {
        node *temp = current;
        current = current->next;
        free(temp);
    }
}

// Example function with quadratic time complexity (O(N^2))
void quadratic_example(int N) {
    // O(N^2) - Nested loops, each running N times
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Some constant time operation
        }
    }
}

// Example function with N log N time complexity (O(N log N)) - Merge Sort
void nlogn_example(int array[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        nlogn_example(array, left, middle);
        nlogn_example(array, middle + 1, right);
        merge(array, left, middle, right);
    }
}

// Helper function for merge sort (O(N log N))
void merge(int array[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = array[left + i];
    for (int i = 0; i < n2; i++) R[i] = array[middle + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        } else {
            array[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = R[j];
        j++;
        k++;
    }
}

// Example function with linear time complexity (O(N))
void linear_example(int array[], int N) {
    // O(N) - A single loop through an array
    for (int i = 0; i < N; i++) {
        // Some constant time operation
    }
}

// Example function with logarithmic time complexity (O(log N)) - Binary Search
int logarithmic_example(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1; // Target is not found
}

// Example function with constant time complexity (O(1))
void constant_example(int array[], int index) {
    // O(1) - Accessing an array element by index
    int element = array[index];
    printf("Element at index %d: %d\n", index, element);
}
