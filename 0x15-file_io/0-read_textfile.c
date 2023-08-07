#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWritten;
	FILE *file;
	char buffer[letters + 1];

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead <= 0)
	{
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	fclose(file);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}

	return (bytesWritten);
}
