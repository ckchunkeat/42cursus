#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_replacement;
	unsigned char	*s_return;

	i = 0;
	s_replacement = (unsigned char *)s;
	s_return = 0;
	while (s_replacement[i] && i < n)
	{
		if (s_replacement[i] == (unsigned char)c)
		{
			s_return = &s_replacement[i];
			return (s_return);
		}
		i++;
	}
	return (s_return);
}
