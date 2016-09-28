#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int signe;
	int nb;

	signe = 1;
	nb = 0;

	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\v' || *str == '\f'))
	{
		str++;
	}
	if (*str == '+')
		str++;
	if (*str == '-' && *str - 1 != '+')
	{
		signe = -1; 
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		nb = *str - '0' + nb * 10;
		str++;
	}
	return (nb * signe);
}

int	main(int ac, char **av)
{
	printf("\n%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return (0);
}
