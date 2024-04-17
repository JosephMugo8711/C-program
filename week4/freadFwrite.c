//fread - reads data from a file into a buffer
// fwrite - writes data from a buffer* to a file


// A buffer is a chunk of memory that can temporarily store some data

//fread(..., ..., ....,  ..from where are we trying to read)
//fread(..., ..., ....,  f);
//fread(buffer ..., ....,  f); // read into the buffer
// where are we going to get the data, where are we going to store

#include <stdio.h>

#define BUFFER_SIZE 1024

void copyFile(const char* inputFile, const char* outputFile)
{
    // Open the input file for reading
    FILE* input = fopen(inputFile, "rb");
    if (input == NULL)
    {
        printf("Error opening input file %s\n", inputFile);
        return;
    }

    // Open the output file for writing
    FILE* output = fopen(outputFile, "wb");
    if (output == NULL)
    {
        printf("Error opening output file %s\n", outputFile);
        fclose(input);
        return;
    }

    // Create a buffer to hold the data
    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    // Read from the input file and write to the output file
    while ((bytesRead = fread(buffer, 1, BUFFER_SIZE, input)) > 0)
    {
        fwrite(buffer, 1, bytesRead, output);
    }

    // Close the files
    fclose(input);
    fclose(output);
}

int main(void)
{
    copyFile("input.txt", "output.txt");
    return 0;
}
