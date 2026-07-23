#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/* given prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/* _putchar function */
int _putchar(char c);

#endif
