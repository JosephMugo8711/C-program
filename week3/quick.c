#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Function to partition the array
int partition(int arr[], int low, int high) {
    // Choose the pivot element (the last element in this case)
    int pivot = arr[high];
    // Initialize the index of the smaller element
    int i = low - 1;

    // Loop through the array from low to high-1
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] < pivot) {
            // Increment index of smaller element
            i++;
            // Swap current element with element at index i
            swap(&arr[i], &arr[j]);
        }
    }
    // Swap the pivot element with the element at index i+1
    swap(&arr[i + 1], &arr[high]);
    // Return the index of the pivot element
    return (i + 1);
}

// Function to perform Quick Sort
void quickSort(int arr[], int low, int high) {
    // Base case: If low is less than high
    if (low < high) {
        // Partition the array and get the index of the pivot element
        int pi = partition(arr, low, high);

        // Recursively sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    // Input array
    int arr[] = {10, 7, 8, 9, 1, 5};
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using Quick Sort
    quickSort(arr, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
