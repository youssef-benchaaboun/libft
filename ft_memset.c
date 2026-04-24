#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*c1;
	size_t	i;

	c1 = (char *)s;
	i = 0;
	while (i < n)
	{
		*c1 = (char)c;
		i++;
		c1++;
	}
	return (s);
}
