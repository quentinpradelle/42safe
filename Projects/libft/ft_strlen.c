#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int main(int ac, char **av)
{
	printf("%d\n", ft_strlen(av[1]));
	return (0);
}
