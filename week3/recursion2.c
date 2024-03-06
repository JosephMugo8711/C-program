// factorial
#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void)
{
    // Get positive value for n
    int n;
    do
    {

        n = get_int("n: ");
    } while (n < 0);

    printf("%i\n", factorial(n));
}

int factorial(int n)
{
    // TODO: Implement factorial fun

    // Base case
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}