#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filenamePtr: A pointer to the name of the file.
 * @numLetters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filenamePtr is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filenamePtr, size_t numLetters)
{
	ssize_t fileDescriptor, bytesRead, bytesWritten;
	char *buffer;

	if (filenamePtr == NULL)
		return (0);

	buffer = malloc(sizeof(char) * numLetters);
	if (buffer == NULL)
		return (0);

	fileDescriptor = open(filenamePtr, O_RDONLY);
	bytesRead = read(fileDescriptor, buffer, numLetters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (fileDescriptor == -1 || bytesRead == -1 || bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fileDescriptor);

	return (bytesWritten);
}
