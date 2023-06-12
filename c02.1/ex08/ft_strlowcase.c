/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:33:16 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/12 11:50:17 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str0[] = "pequeno";
	char str1[] = "GRANDE";
	char str2[] = "NoRmAl";
	
	ft_strlowcase(str0);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	
	printf("Result 0: %s\n", str0);
	printf("Result 1: %s\n", str1);
	printf("Result 2: %s\n", str2);
}*/
