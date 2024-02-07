#include <stdio.h>

int main(void)
{
    int numbers[6]; // Define an array with 6 elements
    numbers[0] = 1; // First element is 1
    
    for (int i = 1; i < 6; i++) { // Start from the second element
        numbers[i] = numbers[i - 1] * 2; // Each element is twice the previous one
    }
    
    for (int i = 0; i < 6; i++) { // Print the array
        printf("%i\n", numbers[i]);
    }
    
    return 0;
}
