/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:03:11 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/14 15:40:14 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[]= "Isso compila?";

	printf("FT_STRLEN: %d\n", ft_strlen(str));
	printf("STRLEN   : %lu\n", strlen(str));
}*/
