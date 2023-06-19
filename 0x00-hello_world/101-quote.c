#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *    ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return: This time we return an error 1.
*/
int main(void) {
    int fd = open("/dev/stderr", O_WRONLY);
    if (fd == -1)
        return 1;

    const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(fd, message, strlen(message));
    close(fd);

    return 1;
}

