#include <stdio.h>

int main(void) {
    char *fruits[] = {"Apple", "Banana", "Orange", "Grapes"};
    char *colors[] = {"Red", "Yellow", "Orange", "Purple"};

  
    int numFruits = sizeof(fruits) / sizeof(fruits[0]);

  
    for (int i = 0; i < numFruits; i++) {
        printf("%s is %s\n", fruits[i], colors[i]);
    }

    return 0;
}
