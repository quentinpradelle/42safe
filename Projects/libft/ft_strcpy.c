#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i]) 
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	main(int ac, char **av)
{
	printf("%s\n", ft_strcpy(av[1], av[2]));
	printf("%s\n", strcpy(av[1], av[2]));
	return (0);
}
