#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i; 
	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}	

char	*ft_strdup(char *str)
{
	int i;
	char *new;
	i = 0;

 	new = malloc(sizeof (char) * ft_strlen(str));
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main(int ac, char **av)
{
	printf("%s", ft_strdup(av[1]));
	return (0);
}
