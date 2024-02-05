#include <stdio.h>
#include <string.h>

#define MAX_BREED_LENGTH 50
#define NUM_DOGS 7

int main() {
    // dog breeds
    char dogBreeds[NUM_DOGS][MAX_BREED_LENGTH] = {
        "Labrador",
        "German Shepherd",
        "Golden Retriever",
        "Bulldog",
        "Beagle",
        "Poodle",
        "Boxer"
    };

    // original array
    printf("Original array of dog breeds:\n");
    for (int i = 0; i < NUM_DOGS; i++) {
        printf("%d: %s\n", i + 1, dogBreeds[i]);
    }

    // Swap the 5th dog with the 2nd
    if (NUM_DOGS >= 5) {
        char temp[MAX_BREED_LENGTH];
        strcpy(temp, dogBreeds[1]);
        strcpy(dogBreeds[1], dogBreeds[4]);
        strcpy(dogBreeds[4], temp);
    } else {
        printf("Not enough dogs in the array to perform the swap.\n");
        return 1;
    }

    // Print modified array
    printf("\nArray after swapping the 5th dog with the 2nd:\n");
    for (int i = 0; i < NUM_DOGS; i++) {
        printf("%d: %s\n", i + 1, dogBreeds[i]);
    }

    return 0; 
}
