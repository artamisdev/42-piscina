/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 23:16:57 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/18 16:06:15 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb -1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("Resposta recursiva do fatorial de 5: %d\n", ft_recursive_factorial(5));
}*/
