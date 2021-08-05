#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s_output;

	i = 0;
	s_output = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		s_output[i] = f(i, s[i]);
		i++;
	}
	s_output[i] = '\0';
	return (s_output);
}
