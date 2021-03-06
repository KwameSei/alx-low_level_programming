#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, _read, _write;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);

/* Reading File */
_read = read(fd, buf, letters);
if (_read == -1)
{
free(buf);
return (0);
}

/* Writing File */
_write = write(STDOUT_FILENO, buf, _read);
if (_write == -1 || _read != _write)
{
free(buf);
return (0);
}

free(buf);
close(fd);

return (_write);
}
