#include <stdio.h>
#include <string.h>

int main(){
    char greeting[] = "Hello, world";
    char name[] = "Jerin";

    strcat(greeting, "My name is ");
    strcat(greeting, name);

    int length = strlen(greeting);

    printf("Mesaage: %s\n", greeting);
    printf("Length: %d\n", length);


    return 0;
}
