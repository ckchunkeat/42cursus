#include "libft.h"

int	ft_splitsize(char const *s, char c)
{
	int	i;
	int	count;

	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	*hp_split(char const *s, size_t i, size_t end)
{
	size_t	j;
	char	*out;

	j = 0;
	out = (char *)malloc(sizeof(char) * end);
	while (j < end)
	{
		out[j] = s[i + j];
		j++;
	}
	out[j] = '\0';
	return (out);
}

char	**ft_split(char const *s, char c)
{
	char	**spt;
	size_t	i;
	size_t	n;
	size_t	count;

	i = 0;
	n = 0;
	spt = (char **)malloc(sizeof(char) * (ft_splitsize(s, c) + 1));
	while (i < ft_strlen(s))
	{
		count = 0;
		while (s[i])
		{
			if (s[i + count] == c)
				break ;
			count++;
		}
		spt[n] = hp_split(s, i, count);
		i += count + 1;
		n++;
	}
	spt[n] = '\0';
	return (spt);
}
