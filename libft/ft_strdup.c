#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	int		i;

	i = 0;
	if (ft_strlen(s) > 0)
	{
		duplicate = (char *)malloc(sizeof(char) * (ft_strlen(s)));
		while (s[i])
		{
			duplicate[i] = s[i];
			i++;
		}
		duplicate[i] = '\0';
		return (duplicate);
	}
	else
		return (0);
}
