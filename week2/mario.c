#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // does not equal 2
    // Any few
    if (argc != 2)
    {
        printf("Usage: ./mario number");
        return 1;
    }
    //string to an int <atoi>
    int height = atoi(argv[1]);
}