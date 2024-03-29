#include <stdio.h>

int main(void)
{
    int n = 50;

    int * p = &n;
    // Print address of n
    // c supports pointers
    printf("%i\n", *p); // *p  go to that address
    printf("%p\n", p);
    printf("%p\n", &n);  // give the address
    return 0;
}
