#include <stdio.h>

// factorial implemenatation of factorial
int fact(int n, int result)
{
    if (n == 0)
        return result;
    else
        return fact(n - 1, n * result);
}

int main(void)
// call another function
// has to wait for the other function
{
    printf("%i\n", fact(5, 1));
    return 0;
}


// main
// printf()
// fact(5)
// fact(4)
// fact3)
// fact(2)
// fact(1)