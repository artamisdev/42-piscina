//#include <stdio.h>

int ft_strlen(char *str)
{
	int x;
	x = 0;
	while(str[x] != '\0')
	{
		x++;
	}
	return x;
}

/*int main(void)
{
	printf("%d", ft_strlen("This is the way!"));
}*/
