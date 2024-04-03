#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get input string
    char *s = get_string("s: ");
    
    // Allocate memory for the new string
    char *t = malloc(strlen(s) + 1);
    // Null - Address zero
    if (t == NULL) 
    {
        return 1; // Error allocating memory
    }

    // Copy string s to string t
    strcpy(t, s);

    // Capitalize the first letter if t is not empty
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both strings
    printf("%s\n", s);
    printf("%s\n", t);

    // Free memory allocated for t
    free(t);

    return 0;
}
