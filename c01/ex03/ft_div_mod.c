//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	a = 3;
	b = 6;
	div = &a;
	mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("%d %d %d %d\n", a, b, *div, *mod);
}*/
