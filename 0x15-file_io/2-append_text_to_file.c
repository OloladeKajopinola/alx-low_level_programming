#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd; /* File descriptor */
	ssize_t w; /* Number of bytes written */
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	/* Open the filein append mode(O_APPEND) with write-only perm */
	fd = open(filename, O_WRONLY | O_APPEND);
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
