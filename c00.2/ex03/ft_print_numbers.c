/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:34:46 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/08 11:04:32 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
