/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:55:28 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/11 16:41:49 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char str0[] = "12345";
	char str1[] = "Ag0ra";
	char str2[] = "";

	int result0 = ft_str_is_numeric(str0);
	int result1 = ft_str_is_numeric(str1);
	int result2 = ft_str_is_numeric(str2);
 
	printf("Result 0: %d\n", result0);
	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
}*/
