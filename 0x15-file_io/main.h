#ifndef MAIN_H
#define MAIN_H

/* For file control options (e.g., 0_RDONLY) */
#include <fcntl.h>
/* For low-level I/O operations (e.g., read, write, close) */
#include <unistd.h>
/* For dynamic memory allocation (e.g., malloc, free) */
#include <stdlib.h>

/* Function prototype for read_textfile */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
