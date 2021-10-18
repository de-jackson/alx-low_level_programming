#ifndef __MAIN_H__
#define __MAIN_H__

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* __MAIN_H__ */
