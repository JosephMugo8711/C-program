#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    // pointer
    // chunk of memory 
    // three times whatever int is
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // SPACE FOR FOUR INTEGERS ELSE WHERE
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;

    // hand it back to operating system
    free(list);
    list = tmp;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0 ;
}