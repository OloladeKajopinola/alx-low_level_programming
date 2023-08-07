#include "main.h"

/**
 * read_textfile - Reads a text file and prints to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: Actual number of letters read and printed. 0 if any error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* File descriptor*/
	ssize_t r, w; /* Number of bytes read and written*/
	/* Buffer to store data read from the file */
	char *buffer;

	if (filename == NULL)
		return (0);
	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/* Allocate memory for the buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	/* Read data from the file */
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Write the data to the standard output */
	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1 || w != r)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/* Clean up and close the file descriptor */
	free(buffer);
	close(fd);
	/* Return the actual number of letters read and printed */
	return (r);
}
