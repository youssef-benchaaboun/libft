#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*re;
	size_t	i;

	re = malloc(ft_strlen(s) + 1);
	if (!re)
		return (NULL);
	i = 0;
	while (s[i])
	{
		re[i] = s[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}
