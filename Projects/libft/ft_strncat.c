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

char	*ft_strncat(char *s1, char *s2, int n)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

int	main(void)
{
	char a[11] = "hello";
	char b[6] = "world ";
//	printf("%s\n", ft_strncat(a, b, 5));
	printf("%s\n", strncat(a, b, 5));
}
