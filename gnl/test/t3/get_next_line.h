#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

typedef struct s_info
{
    char *buf;
    int idx;
    int rb;
} t_info;

char *get_next_line(int fd);

#endif
