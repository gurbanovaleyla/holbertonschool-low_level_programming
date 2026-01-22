#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>   /* read, write, close */
#include <fcntl.h>    /* open, O_RDONLY */
#include <stdlib.h>   /* malloc, free */

/* Task prototype */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
