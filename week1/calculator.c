#include <stdio.h>


int get_int(const char *prompt);
int add(int a, int b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", add(x, y));
}

int get_int(const char *prompt)
{
    int n;
    printf("%s", prompt);
    scanf("%i", &n);
    return n;
}

int add(int a, int b)
{
    return a + b; 
}
