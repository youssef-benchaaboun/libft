#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*re;
	char	*s;
	size_t	i;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	re = malloc(n * size);
	if (!re)
		return (NULL);
	s = (char *)re;
	i = 0;
	while (i < n * size)
		s[i++] = '\0';
	return (re);
}
