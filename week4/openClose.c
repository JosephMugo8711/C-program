// fopen- opens a file for future reading / writing
// fclose - closes a file

// FILE *f = fopen("hi.txt", "r");
//fopen returns - 
// f - find files to open them

//fclose(f) - point to that file and close it

#include <stdio.h>

// Function to open and close a file
void openAndCloseFile(const char* filename)
{
    // Open the file
    FILE *f = fopen("pdf2.txt", "r");

    // check if the file was successfully opened
    if (f == NULL)
    {
        printf("Error opening file %s\n", filename);
        return;
    }

    // File opened successfully, so close it
    fclose(f);
}

int main(void)
{
    // Call the function with the filename "pdf2.txt"
    openAndCloseFile("pdf2.txt");

    return 0;
}
