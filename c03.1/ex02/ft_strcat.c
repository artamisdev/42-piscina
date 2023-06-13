/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:08:49 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/13 17:30:14 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src1[] = " con src.";
	char	dest1[30] = "Esta és dest,";
	char	dest2[30] = "Esta és dest,";

	printf("La funcion agrega src al final de dest:\n");
	printf("STRCAT: %s\n", strcat(dest1, src1));
	printf("FT_STRCAT: %s\n", ft_strcat(dest2, src1));
	return (0);
}*/
