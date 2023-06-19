void	ft_inc(int *ptr)
{
	*ptr += 1;
}

#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int e;

	e = 5;
	ptr = &e;

	ft_inc(ptr);

	printf("%d\n", e);
	return (0);
}
