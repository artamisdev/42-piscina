/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:17:36 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/19 17:42:26 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Se for numero primo, devolve 1, se nao, devolve 0.\n");
	printf("89 = %d\n", ft_is_prime(89));
	printf("7 = %d\n", ft_is_prime(7));
	printf("164 = %d\n", ft_is_prime(164));
	printf("1307 = %d\n", ft_is_prime(1307));
	printf("2332 = %d\n", ft_is_prime(2332));
}*/
