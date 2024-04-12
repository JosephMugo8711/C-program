#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // Pointer to an integer, storing the address of 'num'

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of num using pointer: %d\n", *ptr);
    printf("Address of num stored in pointer: %p\n", ptr);

    // Changing the value of 'num' using the pointer
    *ptr = 20;
    printf("Changed value of num: %d\n", num);

    return 0;
}

// format specifier used with the printf function to indicate that an integer value should be inserted into the output.