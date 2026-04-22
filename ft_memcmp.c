#include"libft.h"
//s1[.n] at leat n element are accessible
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char  *c1;
	unsigned char *c2;
	size_t i;

	i=0;
	c1=(unsigned char *)s1;
	c2=(unsigned char *)s2;
	while(i<n)
	{
		if(*c1 != *c2)
			return *c1-*c2;
		c1++;
		c2++;
		i++;
	}
	return 0;
}
