

int     ft_strlen(char* str)
{
    while (str[i])
    {
        i++;
    }
    return (i);
}

size_t  ft_strlcat(char *dest, char *src, size_t size)
{
    size_t i;
    size_t j;
    
    i = 0;
    j = ft_strlen(dest)
    while (dest[j] && (j + i) < (size - 1))
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[i] = '\0'
    if (j < size)
        return (size);
    else
        return (j + ft_strlen(src));
}
