// Create a program,  that opens a file given as a command-line argument

// Check if that file is a PDF, A PDF always with a four-byte sequence, corresponding to integers
#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, string argv[])
{
    // Check if filename is provided
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        return 1;
    }

    // Open file
    FILE *f = fopen(argv[1], "r");
    if (f == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    // Read the first 4 bytes from the file
    // _t identifies uint8 as its own type
    // u - unsigned
    // 8 bytes
    uint8_t buffer[4];
    // number of blocks read
    int blocks_read = fread(buffer, 1, 4, f);

    // Print the integers in the buffer
    for (int i = 0; i < 4; i++)
    {
        printf("%u\n", buffer[i]);
    }


    printf("Buffer Read: %i\n", blocks_read);
    // Close the file
    fclose(f);

    return 0;
}
