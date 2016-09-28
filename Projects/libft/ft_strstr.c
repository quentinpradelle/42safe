#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *big, char *little)
{
    int i;
    int j;
    int start;
    
    i = 0;
    j = 0;
    start = 0;
    if (little == 0)
        return (big);
    while (big[i])
    {
        if (big[i] && little[j] && (big[i] == little[j]))
        {
            start = i;
            while (big[i] && little[j] && (big[i] == little[j]))
            {
                i++;
                j++;
            }
            if (little[j] == '\0')
                return (&big[start]);
            i = start;
            j = 0;
        }
        i++;
    }
    return (0);
}

int     main(int ac, char **av)
{
    printf("%s\n", ft_strstr(av[1], av[2]));
   //printf("%s\n", strstr(av[1], av[2]));
    return (0);
}