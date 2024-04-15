#include <cs50.h>
#include <stdio.h>

// prototype of fun swap
// Takes a pointer called  a and b
// side effect of returning those two values
void swap(int *a, int *b);

int main(void)
{
    // create variables a,b
    // put them some place in the memory
    int a = 10;
    int b = 50;

    printf("a is %i, b is %i\n", a, b);
    // pass the address of a and b
    swap(&a, &b);
    printf("a is %i, b is %i\n", a, b );
}

void swap(int *a, int *b)
{
    // value that is already there in memory 
    // Havent assigned it anything yet
    int temp = *a; // 257 - garbage value 
    *a = *b;
    *b = temp;
}