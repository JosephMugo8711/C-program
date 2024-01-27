#include <cs50.h>
// include files
#include <stdio.h>

void print_row(int length);

int main(void) // main functions
{
    int height = get_int("Height: "); // get height

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1); // call function
    }
}

void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#")
    }
    printf("\n")
}