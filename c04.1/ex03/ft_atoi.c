/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:17:23 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/17 22:21:39 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		minus_count;
	long	result;

	i = 0;
	minus_count = 0;
	result = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	if (minus_count % 2)
		return (-result);
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "    ---+++-6274417 39nsfkn72vdoa   ";
	char	str2[] = " ---+--+1234ab567";

	printf("Result STR1: %d\n", ft_atoi(str1));
	printf("Result STR2: %d\n", ft_atoi(str2));
}*/
