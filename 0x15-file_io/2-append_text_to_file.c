#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filenamePtr: A pointer to the name of the file.
 * @textPtr: The string to add to the end of the file.
 *
 * Return: If the function fails or filenamePtr is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filenamePtr, char *textPtr)
{
	int fileDescriptor, bytesWritten, contentLength = 0;

	if (filenamePtr == NULL)
		return (-1);

	if (textPtr != NULL)
	{
		for (contentLength = 0; textPtr[contentLength];)
			contentLength++;
	}

	fileDescriptor = open(filenamePtr, O_WRONLY | O_APPEND);
	bytesWritten = write(fileDescriptor, textPtr, contentLength);

	if (fileDescriptor == -1 || bytesWritten == -1)
		return (-1);

	close(fileDescriptor);

	return (1);
}
