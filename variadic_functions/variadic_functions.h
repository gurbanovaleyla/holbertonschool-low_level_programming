#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/* Task 0 & 1 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

/* Task 2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* Task 3 */
void print_all(const char * const format, ...);

#endif
