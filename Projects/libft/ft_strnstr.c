#include <string.h>
#include <stdio.h>

char    *ft_strnstr(char *big, char *little, size_t len)
{
    size_t i;
    size_t j;
    size_t start;
    
    i = 0;
    j = 0;
    start = 0;
    if (little == 0)
        return (big);
    while (big[i] && i < len)
    {
        if (big[i] == little[j])
        {
            start = i;
            while (big[i] == little[j])
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
    char a[15] = "bonjourlafami";
    char b[3] = "";
    printf("%s\n", ft_strnstr(a, b, 12));
    //printf("%s\n", ft_strnstr(a, b, 12));
    return (0);
}