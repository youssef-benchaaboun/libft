#include"libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *cs;

	i=0;
	cs=(unsigned char *)s;
	while(i<n)
	{
		if(cs[i]==(unsigned char)c)
			return (void *)(cs+i);
		i++;
	}
	return NULL;
}
