#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: file name
 * @text_content: text to input
 * Return: 1 if file exists, -1 if file does not exist or no w permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t len, text_len;
	char *ptr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	for (text_len = 0, ptr = text_content; *ptr; ptr++)
		text_len++;
	len = write(file, text_content, text_len);
	if (close(file) == -1 || text_len != len)
		return (-1);
	return (len);
}
