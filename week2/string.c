#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //The strlen() function in C is used to calculate the length of a string.
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

}