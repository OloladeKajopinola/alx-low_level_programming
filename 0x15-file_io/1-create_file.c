#include "main.h"

/**
 * create_file - Creates a fileand writes text content to it.
 * @filename: The nameof the file to create.
 * @text_content: A NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd; /* File descriptor */
	ssize_t w; /* Number of bytes written*/
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	/* Open the file in read-write mode with permissions rw------- */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate the length of the text_content */
		while (text_content[len])
			len++;
		/* Write the text_content to the file */
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	/* Close the file descriptor */
	close(fd);
	return (1);
}
