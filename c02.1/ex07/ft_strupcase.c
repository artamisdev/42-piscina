/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:33:44 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/12 11:36:22 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str0[] = "GRAN";
	char str1[] = "pequeno";
	char str2[] = "NoRmAl";
	
	ft_strupcase(str0);
	ft_strupcase(str1);
	ft_strupcase(str2);
	
	printf("Result 0: %s\n", str0);
	printf("Result 1: %s\n", str1);
	printf("Result 2: %s\n", str2);
}*/
