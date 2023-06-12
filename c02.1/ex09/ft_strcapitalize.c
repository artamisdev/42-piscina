/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:51:12 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/12 14:16:19 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_str_is_alphanumeric(char c)
{
	int	is_lower_case;
	int	is_upper_case;
	int	is_numeric;

	is_lower_case = (c >= 'a' && c <= 'z');
	is_upper_case = (c >= 'A' && c <= 'Z');
	is_numeric = (c >= '0' && c <= '9');
	if (is_lower_case || is_upper_case || is_numeric)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev_i;
	char	curr_i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		curr_i = str[i];
		prev_i = str[i - 1];
		if (!ft_str_is_alphanumeric(prev_i) && curr_i >= 'a' && curr_i <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "Tami AlHHJSabet, ?! FMiguelGG";
	
	char*	result1 = ft_strcapitalize(str1);
	char*	result2 = ft_strcapitalize(str2);

	printf("Result 1: %s\n", result1);
	printf("Result 2: %s\n", result2);
}*/
