int	ft_atoi(const char *str)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
		*str == '\r' || *str == '\v' || *str == '\f')
		str += 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str += 1;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str += 1;
	}
	return (result * sign);
}
