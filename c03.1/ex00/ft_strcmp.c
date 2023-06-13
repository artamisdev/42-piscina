/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:36:08 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/13 17:34:15 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Si el valor es positivo la primer string es mas grande.\n");
	printf("Si el valor es negativo la primer string es mas pequeña.\n");
	printf("Si el valor es zero, las strings son iguales.\n");
	printf("\n");
	printf("Hello / Hello: %d\n", ft_strcmp("Hello", "Hello"));
	printf("Hello! / Hello: %d\n", ft_strcmp("Hello!", "Hello"));
	printf("Hello / Hello!: %d\n", ft_strcmp("Hello", "Hello!"));
	printf("He / Hello: %d\n", ft_strcmp("He", "Hello"));
	printf("Hello / He: %d\n", ft_strcmp("Hello", "He"));
}*/
