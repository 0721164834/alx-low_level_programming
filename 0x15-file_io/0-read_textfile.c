#include "main.h"

/**
 * read_textfile - reads a text and prints it to the POSIX standard output.
 * @filename: name of the file to be read.
 * @letters: context of the file
 *
 * Return: 0 if the file cat be opened or read || filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t bytes_read, bytes_written;
	FILE *file;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(file);
	if (bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
