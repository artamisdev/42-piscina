#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	int	i;

	i = 57;
	while (i > 47)
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_countdown();
	return (0);
}
