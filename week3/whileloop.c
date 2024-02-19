#include <stdio.h>

int main(){
    int number;

    printf("Guess the number (i to 10): ");
    scanf("%d", &number);

    while(number != 7){
        printf("Wrong guess. Try again: ");
        scanf("%d", &number);
    }
    printf("Congratulations! You guessed it !\n");

    return 0;
}