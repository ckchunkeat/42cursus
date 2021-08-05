int	ft_atoi(const char *nptr)
{
	int	integer;
	int	sign;
	int	i;

	integer = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
		|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f')
		i++;
	if (nptr[i] == '-')
		sign *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' || nptr[i] <= '9')
	{
		integer *= 10;
		integer += (nptr[i] - '0');
	}
	return (integer * sign);
}
