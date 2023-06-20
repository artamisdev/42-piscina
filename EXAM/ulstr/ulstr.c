#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
		
int	 main(int argc, char **argv)
{
	int		i;
	char	low;
	char	up;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{		
		low = (argv[1][i] >= 'a' && argv[1][i] <= 'z');
		up = (argv[1][i] >= 'A' && argv[1][i]<= 'Z');
		if (up)
		{
			ft_putchar(argv[1][i] + 32);
		}
		else if (low)
		{
			ft_putchar(argv[1][i] - 32);
		}
		else
			ft_putchar(argv[1][i]);
		i++;
	}

	ft_putchar('\n');
	return (0);
}

