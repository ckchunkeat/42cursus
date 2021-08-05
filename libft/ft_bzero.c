#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*replacement;

	i = 0;
	replacement = (unsigned char *)s;
	while (i < n)
	{
		replacement[i] = '\0';
		i++;
	}
}
