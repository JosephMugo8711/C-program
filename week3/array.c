#include <stdio.h>

int main() {
    float studentGrades[7] = {22, 33, 44, 55, 66, 76, 98};

    float total = 0;
    for (int i = 0; i < 7; i++) {
        total += studentGrades[i];
    }
    float average = total / 7;

    printf("Average Grade: %.2f\n", (double)average);

    return 0;
}
