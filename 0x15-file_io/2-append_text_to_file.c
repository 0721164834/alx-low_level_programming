#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: file content
 *
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(fd, text_content, content_length);
		close(fd);
		if (bytes_written != (ssize_t)content_length)
			return (-1);
	}
	else
		close(fd);
	return (1);
}
