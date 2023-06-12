/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:11:47 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/11 15:47:59 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	array_position;

	array_position = 0;
	while (array_position < size / 2)
	{
		aux = tab[array_position];
		tab[array_position] = tab[size - 1 - array_position];
		tab[size - 1 - array_position] = aux;
		array_position++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int tab[] = {5,4,3,2,1};
	int x;

	x = 0;
	printf("Antes:");
	while (x < 5)
	{
		printf("%d", tab[x]);
		x++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 5);
	x = 0;
	printf("Despues:");
	while (x < 5)
	{
		printf("%d", tab[x]);
		x++;
	}
}*/
