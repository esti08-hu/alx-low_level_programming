#include "main.h"

/**
 * create_file - Creates a file.
 * @filenamePtr: A pointer to the name of the file to create.
 * @textPtr: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filenamePtr, char *textPtr)
{
	int fileDescriptor, bytesWritten, contentLength = 0;

	if (filenamePtr == NULL)
		return (-1);

	if (textPtr != NULL)
	{
		for (contentLength = 0; textPtr[contentLength];)
			contentLength++;
	}

	fileDescriptor = open(filenamePtr, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytesWritten = write(fileDescriptor, textPtr, contentLength);

	if (fileDescriptor == -1 || bytesWritten == -1)
		return (-1);

	close(fileDescriptor);

	return (1);
}
