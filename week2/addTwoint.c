#include <stdio.h>

int add_two_ints(int a, int b);

int main() {
    int result = add_two_ints(3, 4);
    printf("Result: %d\n", result);
    return 0;
}

int add_two_ints(int a, int b) {
    int sum = 0;
    if (a > 0)
        for (int i = 0; i < a; sum++, i++);
    else
        for (int i = a; i < 0; sum--, i++);
    if (b > 0)
        for (int i = 0; i < b; sum++, i++);
    else
        for (int i = b; i < 0; sum--, i++);
    return sum;
}
