/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:20:57 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/08 16:58:12 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	starting_pos;
	int	aux;

	starting_pos = 0;
	while (starting_pos < size - 1)
	{
		if (tab[starting_pos] > tab[starting_pos + 1])
		{
			aux = tab[starting_pos + 1];
			tab[starting_pos + 1] = tab[starting_pos];
			tab[starting_pos] = aux;
			starting_pos = 0;
			continue ;
		}
		starting_pos++;
	}
}

/*#include <stdio.h>

int	main(void)
{
     int	tab[] = {9,4,7,2,1,3,5,8,6};
	 int	x;
	 
	 x = 0;
	 printf("Antes:");
	 while (x < 9)
	 {
		 printf("%d", tab[x]);
		 x++;
	 }
	 printf("\n");
	 ft_sort_int_tab(tab, 9);
	 x = 0;
	 printf("Despues:");
	 while (x < 9)
	 {
		 printf("%d", tab[x]);
		 x++;
	 }
}*/
