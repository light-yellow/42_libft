char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char		*result_ptr;

	i = 0;
	result_ptr = (char *)0;
	if (c == '\0')
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			result_ptr = (char *)&s[i];
		i += 1;
	}
	return (result_ptr);
}
