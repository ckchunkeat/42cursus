#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1_replacement;
	const char	*s2_replacement;
	size_t		i;

	s1_replacement = (const char *)s1;
	s2_replacement = (const char *)s2;
	i = 0;
	while ((s1_replacement[i] || s2_replacement[i]) && i < n)
	{
		if (s1_replacement[i] != s2_replacement[i])
			return (s1_replacement[i] - s2_replacement[i]);
		i++;
	}
	return (0);
}
