/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:15:18 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/11 17:32:42 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
			i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "Pr1nt4bl3s";
	char	str1[] = "\n\f";
	char	str2[] = "";

	int	result0 = ft_str_is_printable(str0);
	int	result1 = ft_str_is_printable(str1);
	int	result2 = ft_str_is_printable(str2);

	printf("Result 0: %d\n", result0);
	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
}*/
