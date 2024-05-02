#include "ft_get_next_line.h"

void	ft_leaks(void)
{
	system("leaks -q gnl");
}

int	main(void)
{
	int		fd;
	char	*line;

	atexit(ft_leaks);
	fd = open("sometext.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("Línea:%s\n", line);
	free (line);
	line = get_next_line(fd);
	printf("Línea:%s\n", line);
	free (line);
	line = get_next_line(fd);
	printf("Línea:%s\n", line);
	free (line);
	close (fd);
	return (0);
}
