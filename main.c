#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*ret;

	ret = NULL;
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error in opening file\n");
		return (1);
	}
	while ((ret = get_next_line(fd)))
	{
		printf("%s", ret);
		free(ret);
	}
	close(fd);
	return (0);
}
