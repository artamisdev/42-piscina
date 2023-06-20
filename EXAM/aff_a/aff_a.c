#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				return (0);
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
