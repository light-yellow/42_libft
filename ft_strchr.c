char	*ft_strchr(const char *s, int c)
{
	unsigned int i;

	i = 0;
	if (c == '\0')
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i += 1;
	}
	return ((char *)0);
}
