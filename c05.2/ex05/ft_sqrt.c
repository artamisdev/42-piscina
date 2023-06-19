/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:08:19 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/19 17:40:25 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;

	if (nb == 1)
		return (1);
	result = nb / 2;
	while (result > 0 && result * result > nb)
	{
		result += nb / result;
		result /= 2;
	}
	if (result * result == nb)
		return (result);
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	printf("A raiz quadrada de 16: %d\n", ft_sqrt(16));
	printf("A raiz quadrada de 3: %d\n", ft_sqrt(3));
}*/
