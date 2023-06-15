#include "get_next_line.h"
// #include "get_next_line.c"
// #include "get_next_line_utils.c"


#include <stdio.h>
#include <fcntl.h>
/*
int main(void)
{
	char *line;
	int fd[1];

	fd[0] = open("test0.txt", O_RDONLY);
	line = get_next_line(fd[0]);
	printf("fd: %d | %s\n", fd[0], line);
	line = get_next_line(fd[1]);
	printf("fd: %d | %s\n", fd[0], line);
	free(line);
	return (0);
}
*/
int main(void)
{
	char *line;
	int fd[2];
	size_t	i;

	fd[0] = open("test0.txt", O_RDONLY);
	fd[1] = open("test1.txt", O_RDONLY);

	i = 0;
	while (i < 2)
	{
		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		line = get_next_line(fd[i]);
		printf("fd: %d | %s\n", fd[i], line);
		free(line);

		close(fd[i]);
		i++;
	}

	return (0);
}