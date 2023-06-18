/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tacampos <tacampos@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:30:25 by tacampos          #+#    #+#             */
/*   Updated: 2023/06/17 19:33:58 by tacampos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int count, char **value)
{
	char	*tmp;
	int		to_find;
	int		i;

	to_find = 1;
	while (to_find)
	{
		to_find = 0;
		i = 0;
		while (++i < count - 1)
		{
			if (ft_strcmp(value[i], value[i + 1]) > 0)
			{
				tmp = value[i];
				value[i] = value[i + 1];
				value[i + 1] = tmp;
				to_find = 1;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	ft_sort(argc, argv);
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
