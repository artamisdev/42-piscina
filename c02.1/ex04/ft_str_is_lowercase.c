/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:08:39 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/11 17:14:15 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
			i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "oi";
	char	str1[] = "hOlA";
	char	str2[] = "";

	int	result0 = ft_str_is_lowercase(str0);
	int	result1 = ft_str_is_lowercase(str1);
	int	result2 = ft_str_is_lowercase(str2);

	printf("Result 0: %d\n", result0);
	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
}*/
