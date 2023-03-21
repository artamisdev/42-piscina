//#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	i = 0;
	while(i < size / 2)
	{
		/* "&" para indicar oendereço do inteiro 
		(quero o endereço dessa variável)*/ 
		ft_swap(&tab[i], &tab[size-1-i]);
		i++;
	}
}

/*int main(void)
{	
	int i = 0;
	int tab[7] = {0,1,2,3,4,5,6};

	// ANTES
	while(i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}

	printf("\n");
	ft_rev_int_tab(tab, 7);

	// DEPOIS
	i = 0;
	while(i < 7)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
