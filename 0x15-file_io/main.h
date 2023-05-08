#ifndef _MAIN_H_
#define _MAIN_H_


#include <sys/stat.h>

#include <sys/types.h>

#include <sys/uio.h>

#include <fcntl.h>

#include <unistd.h>

#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_the_file(int fd, char *file_to);
int main(int argc, char *argv[]);
#endif
