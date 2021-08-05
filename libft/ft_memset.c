#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*replacement;

	i = 0;
	replacement = (unsigned char *)s;
	while (i < n)
	{
		replacement[i] = (unsigned char)c;
		i++;
	}
	return (replacement);
}
