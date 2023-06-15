#include "get_next_line.h"
// #include "get_next_line.c"
// #include "get_next_line_utils.c"


#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	char *line;
	int fd[1];

	fd[0] = open("test0.txt", O_RDONLY);
	line = get_next_line(fd[0]);
	printf("fd: %d | %s\n", fd[0], line);
	free(line);
	return (0);
}