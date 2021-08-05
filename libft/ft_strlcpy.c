#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (dstsize > 0)
	{
		while ((i < dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src [i];
			i++;
		}
		dst [i] = '\0';
	}
	return (count);
}
