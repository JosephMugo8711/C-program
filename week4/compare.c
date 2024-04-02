#include <cs50.h> 
#include <stdio.h>
#include <string.h>

int main(void)
{
   
    // int i = get_int("i: ");
    // int j = get_int("j: ");

    // Get two strings from the user
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Compare the two strings
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}
