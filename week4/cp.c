#include <stdio.h>
#include <stdint.h>

// Define BYTE as an 8-bit unsigned integer
typedef uint8_t BYTE;

// Main function with command line arguments
int main(int argc, char *argv[])
{
    // Open the source file (argv[1]) in read-binary mode ("rb")
    FILE *src = fopen(argv[1], "rb");
    // Open the destination file (argv[2]) in write-binary mode ("wb")
    FILE *dst = fopen(argv[2], "wb");

    // Declare a variable to store each byte read from the source file
    BYTE b;

    // Read a byte from the source file and write it to the destination file
    // Continue reading and writing until the end of the file (fread returns 0)
    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        // Write the byte to the destination file
        fwrite(&b, sizeof(b), 1, dst);
    }

    // Close the destination file
    fclose(dst);
    // Close the source file
    fclose(src);

    // Return 0 to indicate successful execution
    return 0;
}
