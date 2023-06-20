#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int j;
	int	curr;
	int	pos_in_alpha;

	i = 0;
	while (str[i])
	{
		curr = str[i];
		if (curr >= 'a' && curr <= 'z')
				pos_in_alpha = curr - 'a';
		else if (curr >= 'A' && curr <= 'Z')
				pos_in_alpha = curr - 'A';
		else 
				pos_in_alpha = 0;
		j = 0;		
		while (j <= pos_in_alpha)
			{
				ft_putchar(curr);
				j++;
			}
			i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	
		ft_putchar('\n');
		return (0);
	}	
	repeat_alpha(argv[1]);
	return (0);
}

