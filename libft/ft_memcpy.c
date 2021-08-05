#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t		i;
	char		*dest_replacement;
	const char	*src_replacement;

	i = 0;
	dest_replacement = (char *)dest;
	src_replacement = (const char *)src;
	if (dest_replacement[i] && src_replacement[i])
	{
		while (i < n)
		{
			dest_replacement[i] = src_replacement[i];
			i++;
		}
	}
	return (dest_replacement);
}
