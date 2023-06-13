/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:57:08 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/13 17:30:32 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
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
	char	src0[] = " junto con src.";
	char	dest0[30] = "Dest,";
	char	dest1[30] = "Dest,";

	printf("Result STRNCAT: %s\n", strncat(dest0, src0, 15));
	printf("Result FT_STRNCAT: %s\n", ft_strncat(dest1, src0, 15));
	return (0);
}*/
