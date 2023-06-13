/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:47:22 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/13 17:31:18 by tacampos         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (src_len + size);
	i = 0;
	while (src[i] && i < size - dest_len - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*src = "World";
	char	dest[30] = "Hello + ";
	char	dest1[30] = "Hello + ";

	printf("Esta funcion agrega src à dest.\n");
	printf("Respuesta STRLCAT   : %lu %s\n", strlcat(dest, src, 14), dest);
	printf("Respuesta FT_STRLCAT: %d %s\n", ft_strlcat(dest1, src, 14), dest1);
}*/
