#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_replacement;
	const char	*src_replacement;
	char		*temp;

	i = 0;
	dest_replacement = (char *)dest;
	src_replacement = (const char *)src;
	temp = (char *)malloc(sizeof(char) * n);
	if (dest_replacement[i] && src_replacement[i])
	{
		while (i < n)
		{
			temp[i] = src_replacement[i];
			dest_replacement[i] = temp[i];
			i++;
		}
	}
	free (temp);
	return (dest_replacement);
}
