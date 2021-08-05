#include "libft.h"

int	ft_numcount(int	n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*arr;
	int				num_count;
	int				i;
	unsigned int	value;

	i = 0;
	value = (unsigned int)n;
	num_count = ft_numcount(n);
	arr = (char *)malloc(sizeof(char) * (num_count + 1));
	while (i < num_count)
	{
		arr[num_count - i - 1] = (value % 10) + '0';
		value /= 10;
		i++;
	}
	arr[num_count] = '\0';
	if (n < 0)
		arr[0] = '-';
	return (arr);
}
