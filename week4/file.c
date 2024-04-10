#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[100];

    // Open a file for writing
    filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to the file
    fprintf(filePointer, "Hello, this is Benjamin Franklin!\n");

    // Close the file
    fclose(filePointer);

    // Open the file for reading
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read data from the file
    fgets(data, 100, filePointer);
    printf("Data read from file: %s", data);

    // Close the file
    fclose(filePointer);

    return 0;
}
