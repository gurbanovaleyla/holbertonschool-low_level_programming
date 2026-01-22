#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>   /* read, write, close */
#include <fcntl.h>    /* open, O_RDONLY */
#include <stdlib.h>   /* malloc, free */

/* Task prototype */
ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void copy_file(const char *file_from, const char *file_to);

#endif /* MAIN_H */
