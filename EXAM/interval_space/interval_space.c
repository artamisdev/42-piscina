#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc != 2 || !argc)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_putchar(argv[1][0]);
	while (argv[1][i])
	{
		write(1, "   ", 3);
		ft_putchar(argv[1][i]);
		i++;
	}
	return (0);
}
