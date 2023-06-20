#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alpha(void)
{
	int	 i;

	i = 97;
	while (i <= 122)
	{
		if (i % 2 == 0)
			ft_putchar(i - 32);
		else ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_alpha();
	return (0);
}

/*int	main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
	write(1, "\n", 1);
	return (0);
}*/  
