#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>  // free 함수를 위해 추가
#include <unistd.h>  // close 함수를 위해 추가
#include "get_next_line.h"  // 주석 해제

void leaks_check(void)
{
	system("leaks gnl");
}

int main(int argc, char **argv)
{
	atexit(leaks_check);
    int fd;
    char *line;

    if (argc != 2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return (1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return (0);
}
