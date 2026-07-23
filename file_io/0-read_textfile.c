#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a text and print it to the POSIX standard output
 * @filename: file name
 * @letters: number of letters to read and print
 * Return: actual number of letters, or 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int len, written;
	char *pos;

	if (filename == NULL || letters == 0)
		return (0);
	pos = malloc(sizeof(char) * (letters));
	if (pos == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(pos);
		return (0);
	}
	len = read(file, pos, letters);
	if (len == -1)
	{
		free(pos);
		close(file);
		return (0);
	}
	written = write(STDOUT_FILENO, pos, len);
	free(pos);
	close(file);
	if (written != len)
		return (0);
	return (len);
}
