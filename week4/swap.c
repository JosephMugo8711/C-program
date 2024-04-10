#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values of a and b using pointers
    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
