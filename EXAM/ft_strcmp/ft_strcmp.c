int    ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return 1;
		if (s1[i] < s2[i])
			return -1;
		i++;
	}
	if (s1[i] > s2[i])
		return 1;
	if (s1[i] < s2[i])
		return -1;
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("   strcmp: %d", strcmp("hello", "hello"));
	printf("\n");
	printf("ft_strcmp: %d", ft_strcmp("hello", "hello"));
	printf("\n");
	printf("\n");
	printf("%d", strcmp("h3llo", "h3lloy"));
	printf("\n");
	printf("%d", ft_strcmp("h3llo", "h3lloy"));
	printf("\n");
	printf("\n");
	printf("%d", strcmp("helloy", "hello"));
	printf("\n");
	printf("%d", ft_strcmp("helloy", "hello"));
}
