#include"libft.h"
void *ft_memset(void s[.n], int c, size_t n)
{
	char *c;
	size_t i;

	c=(char *)s;
	i=0;
	while(i<n)
	{
		*c=(char)n;
		i++;
		c++;
	}
	return s;
}
