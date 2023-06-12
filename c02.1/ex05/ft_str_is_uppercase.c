/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:43:23 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/11 17:08:08 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
			i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "AGORA";
	char	str1[] = "Vai";
	char	str2[] = "";

	int	result0 = ft_str_is_uppercase(str0);
	int	result1 = ft_str_is_uppercase(str1);
	int	result2 = ft_str_is_uppercase(str2);

	printf("Result 0: %d\n", result0);
	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
}*/
