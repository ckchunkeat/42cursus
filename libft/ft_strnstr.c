#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	while (big[b] && b < len)
	{
		l = 0;
		while ((big[b + l] == little[l]) && big[b + l]
			&& little[l] && (b + l) < len)
			l++;
		if (little[l] == '\0')
			return ((char *)&big[b]);
		b++;
	}
	return (0);
}
