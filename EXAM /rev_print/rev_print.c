#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	len = ft_strlen(argv[1]);
	while (len--)
	{
		ft_putchar(argv[1][len]);
	}
	ft_putchar('\n');
	return (0);
}
