#include <cs50.h>
#include <stdio.h>

// declare fun
int add_two_ints(int a, int b);

int main(void)
{
    // Ask user for input
    printf("Give me an int: ");
    int x = GetInt();
    printf("Give me another integer: ");
    int y = GetInt();

    // add the two numbers together via a fun call
    int z = add_two_ints(x, y);

    // output the result
    printf("The sum %i and %i is %i!\n", x,y,z);
}