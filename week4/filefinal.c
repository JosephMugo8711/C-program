#include <stdio.h>

void manipulateFile(const char *filename)
{
    FILE *file = fopen(filename, "r+"); // Open the file for reading and writing
    if (file == NULL)
    {
        perror("Error opening file");
        return;
    }

    // Read a character from the file
    int ch = fgetc(file);
    if (ch == EOF)
    {
        perror("Error reading from file");
        fclose(file);
        return;
    }

    // Write the character to the file
    if (fputc(ch, file) == EOF)
    {
        perror("Error writing to file");
        fclose(file);
        return;
    }

    // Move the file pointer to the beginning
    if (fseek(file, 0, SEEK_SET) != 0)
    {
        perror("Error seeking file");
        fclose(file);
        return;
    }

    // Read a string from the file
    char buffer[1024];
    if (fgets(buffer, sizeof(buffer), file) == NULL)
    {
        perror("Error reading string from file");
        fclose(file);
        return;
    }

    // Write the string to the file
    if (fputs(buffer, file) == EOF)
    {
        perror("Error writing string to file");
        fclose(file);
        return;
    }

    // Print the current position in the file
    printf("Current position in file: %ld\n", ftell(file));

    // Check if end of file has been reached
    if (feof(file))
    {
        printf("End of file reached\n");
    }

    // Check for any error
    if (ferror(file))
    {
        perror("Error reading or writing file");
    }

    // Close the file
    fclose(file);
}

int main(void)
{
    const char *filename = "wamiti.txt";
    manipulateFile(filename);
    return 0;
}
