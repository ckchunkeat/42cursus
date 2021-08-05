#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cmb;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cmb = 0;
	cmb = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		cmb[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		cmb[i + j] = s2[j];
		j++;
	}
	cmb[i + j] = '\0';
	return (cmb);
}
