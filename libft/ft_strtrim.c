#include "libft.h"

size_t	is_set(char const *s1, char const *set, int casetyp)
{
	size_t	s1_index;
	size_t	set_index;

	set_index = 0;
	if (casetyp == 1)
		s1_index = 0;
	if (casetyp == 2)
		s1_index = ft_strlen(s1) - ft_strlen(set);
	while (set[set_index])
	{
		if (s1[s1_index + set_index] != set[set_index])
			return (0);
		set_index++;
	}
	return (set_index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trm;

	i = 0;
	start = is_set(s1, set, 1);
	end = is_set(s1, set, 2);
	trm = (char *)malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	while ((start + i) < (ft_strlen(s1) - end))
	{
		trm[i] = s1[start + i];
		i++;
	}
	trm[i] = '\0';
	return (trm);
}
