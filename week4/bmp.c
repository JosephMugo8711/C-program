// byte map file
#include <stdio.h>
#include <stdint.h>

// Define BYTE as an 8-bit unsigned integer
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    // Open the file in read-binary mode ("rb")
    FILE *file = fopen(argv[1], "rb");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display each byte of the file
    BYTE buffer;
    while (fread(&buffer, sizeof(buffer), 1, file) == 1)
    {
        printf("%02x ", buffer); // Print each byte in hexadecimal format
    }

    // Close the file
    fclose(file);

    return 0;
}
