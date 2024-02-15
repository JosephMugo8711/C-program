#include <stdio.h>

// Function to find the sum of all elements in an array
int sumArray(int arr[], int n) {
    int sum = 0;  // Initialize sum to 0

    // Iterate through each element of the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Add the current element to the sum
    }

    return sum;  // Return the final sum
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    int result = sumArray(arr, n);  // Call the function to find the sum
    printf("Sum of array elements: %d\n", result);  // Print the result

    return 0;
}

// Running time O(n), where n is the number of elements in the array.




