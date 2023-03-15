#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	int i;
	i = 'z';
	while(i >= 'a')
	{
		ft_putchar(i);
		i--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
}
