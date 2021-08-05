#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	k = 0;
	if (i > size)
		return (j + size);
	else
	{
		while (src[k] && ((i + j) < (size - 1)))
		{
			dst[i + k] = src[k];
			k++;
		}
		dst[i + k] = '\0';
		return (i + k);
	}
}
