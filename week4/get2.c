#include <stdio.h>

int main(void)
{
    char s[20]; // Increase the size of s to accommodate longer strings
    printf("s:  ");
    scanf("%19s", s); // Limit input to the size of the array - 1
    printf("s: %s\n", s);
}
