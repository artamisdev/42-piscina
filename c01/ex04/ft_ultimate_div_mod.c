//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{ 
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main(void)
{	
	int *a;
	int *b;
	int x;
	int y;
	x = 6;
	y = 3;
	a = &x;
	b = &y;

// "&" antes da variável, significa "o endereço" da variável. 

	printf("%d %d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("%d %d", *a, *b);
	return 0;
}*/
