#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	char	alpha_up;
	char	alpha_low;

	while (*str)
	{
		alpha_low =	(*str >= 'a' && *str <= 'y');
		alpha_up = (*str >= 'A' && *str <= 'Y');
		if (alpha_up || alpha_low)
			ft_putchar(*str + 1);
		else if (*str == 'Z' || *str == 'z')
			ft_putchar(*str - 25);
		else
			ft_putchar(*str);
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
