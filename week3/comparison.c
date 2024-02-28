#include <stdio.h>

// Linear search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) { // Loop through each element of the array
        if (arr[i] == key) { // Check if the current element is equal to the key
            return i; // If found, return the index of the element
        }
    }
    return -1; // If not found, return -1
}

// Binary search function
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) { // Continue until the range is valid
        int mid = low + (high - low) / 2; // Calculate the middle index
        if (arr[mid] == key) { // Check if the middle element is equal to the key
            return mid; // If found, return the index of the middle element
        } else if (arr[mid] < key) { // If key is greater, search in the right half
            low = mid + 1; // Update the lower bound of the search range
        } else { // If key is smaller, search in the left half
            high = mid - 1; // Update the upper bound of the search range
        }
    }
    return -1; // If not found, return -1
}

int main() {
    // Array to search (assuming sorted)
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Length of array
    int key = 5; // Key to search for

    // Perform linear search
    int linearIndex = linearSearch(arr, n, key);

    // Perform binary search
    int binaryIndex = binarySearch(arr, 0, n - 1, key);

    // Print results
    if (linearIndex != -1 && binaryIndex != -1) {
        printf("Element found at index %d (Linear Search)\n", linearIndex);
        printf("Element found at index %d (Binary Search)\n", binaryIndex);
        printf("Common Algorithm: O(n) for Linear Search and O(log n) for Binary Search\n");
    } else {
        printf("Element not found\n");
    }

    return 0;
}
