/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:59:01 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/11 16:01:07 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_lower_case;
	int	is_upper_case;

	i = 0;
	while (str[i] != '\0')
	{
		is_lower_case = (str[i] >= 'a' && str[i] <= 'z');
		is_upper_case = (str[i] >= 'A' && str[i] <= 'Z');
		if (is_lower_case != 1 && is_upper_case != 1)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
   char str1[] = "HelloWorld";
   char str2[] = "12345";
   char str3[] = "abcDEF";
   char str4[] = "";

    int result1 = ft_str_is_alpha(str1);
    int result2 = ft_str_is_alpha(str2);
    int result3 = ft_str_is_alpha(str3);
	int result4 = ft_str_is_alpha(str4);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
	printf("Result 4: %d\n", result4);

	return (0);
}*/
