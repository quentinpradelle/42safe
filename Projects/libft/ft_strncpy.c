

char	*ft_strcpy(char *dst, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n) 
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
