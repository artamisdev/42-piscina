/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:00:09 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/12 15:28:44 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "Jenni";
	char	dest[] = "Tami";
	char	src1[] = "Estoy Loca";
	char	dest1[] = "Jenni tambien";

	printf("%d | %s\n", ft_strlcpy(dest, src, 3), dest);
	printf("%d | %s", ft_strlcpy(dest1, src1, 8), dest1);
}*/
