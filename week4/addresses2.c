#include <stdio.h>

int main(void)
{
    char *S = "HI!";
    printf("%s\n", S);
    printf("%c\n", S[1]);
    printf("%c\n", S[2]);
    printf("%c\n", *S);
    printf("%c\n", *(S + 1));
     printf("%c\n", *(S + 2));

}