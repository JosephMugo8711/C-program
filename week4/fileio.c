#include <stdio.h>

//  performing input/output operations on files.

int main(void)
{
    FILE *file; // File pointer
    char data[100]; // Buffer for data

    // Open file for writing ("w" mode creates a new file or truncates an existing file)
    file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write formatted data to the file
    fprintf(file, "Hello, world!\n");

    // Close the file
    fclose(file);

    // Open file for reading ("r" mode opens an existing file for reading)
    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read formatted data from the file
    fscanf(file, "%s", data);

    // Print the read data
    printf("Data from file: %s\n", data);

    // Close the file
    fclose(file);

    return 0;
}




// fopen - Opens a file and returns a file pointer that can be used for other file operations. It takes two arguments: the name of the file and the mode in which to open the file (e.g., read, write, append).
// fclose - Closes a file that was opened with fopen. It takes a file pointer as an argument.
//fprintf - Writes formatted data to a file. It takes a file pointer and a format string followed by the values to be written to the file.
//fscanf - Reads formatted data from a file. It takes a file pointer and a format string followed by pointers to variables where the read values should be stored.
//fread - Reads a specified number of bytes from a file into a buffer. It takes a pointer to the buffer, the size of each element to be read, the number of elements to read, and a file pointer.
//fwrite - Writes a specified number of bytes from a buffer to a file. It takes a pointer to the buffer, the size of each element to write, the number of elements to write, and a file pointer.
//fseek -  Sets the file position indicator for the specified file stream. It takes a file pointer, an offset from a reference point (start, current, or end of file), and the reference point.
