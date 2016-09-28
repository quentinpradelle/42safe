#include <unistd.h>
#include <string.h>
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

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;
	
	i = 0;
	j = ft_strlen(s1);

	while (s2[i])
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

int	main(int ac, char **av)
{
	char a[12] = "bonsoir";
	char b[5] = "jour";
	printf("%s\n", ft_strcat(a, b));
//	printf("%s\n", strcat(a, b));
	return (0);	
}
