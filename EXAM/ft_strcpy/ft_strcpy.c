char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[10] = "Dest";
	char	s11[10] = "Dest";
	char	s2[] = "src 13";

	printf("strcpy: %s\n", strcpy(s1, s2));
	printf("ft_strcpy: %s\n", ft_strcpy(s11, s2));
}*/

