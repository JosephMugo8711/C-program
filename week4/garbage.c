#include <stdio.h>

// garbage values -  Values of variables that you did not proactively set yourself as intended

int main(void)
{
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}