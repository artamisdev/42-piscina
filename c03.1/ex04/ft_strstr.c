/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:30:47 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/13 17:31:01 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "erf$%457TTITO$Tuwddl3";
	char	to_find[] = "TITO";
	
	char	str1[] = "erf$%457TTITO$Tuwddl3";
	char	to_find1[] = "TITO";

	printf("Esta funcion devuelve la direccion del memoria.\n");
	printf("Respuesta    STRSTR:  %p", strstr(str, to_find));
	printf("\n");
	printf("Respuesta FT_STRSTR:  %p", ft_strstr(str1, to_find1));
	printf("\n");
}*/
