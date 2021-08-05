#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = 0;
	if (count > 0 && size > 0)
	{
		str = malloc(count * size);
		ft_bzero(str, count * size);
	}
	return (str);
}
