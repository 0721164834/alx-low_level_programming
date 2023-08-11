#include "main.h"
#include <sys/stat.h>

/**
 * create_file - create a file
 * @filename: filename of the file to be created
 * @text_content: contex of the file
 *
 * Return: -1 if the filename is null
 */
int create_file(const char *filename, char *text_content)
{
	size_t content_length;
	ssize_t bytes_written;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
