#ifndef MAIN
#define MAIN


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *test_content);
#endif
