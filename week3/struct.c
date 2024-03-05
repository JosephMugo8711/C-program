#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char party[20];
} Candidate;

int main() {
    Candidate candidate1;
    strcpy(candidate1.name, "Alice Smith");
    candidate1.age = 45;
    strcpy(candidate1.party, "Independent");

    printf("Name: %s\n", candidate1.name);
    printf("Age: %d\n", candidate1.age);
    printf("Party: %s\n", candidate1.party);

    return 0;
}
