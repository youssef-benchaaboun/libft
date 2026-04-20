#include"libft.h"
void ft_bzero(void s[.n], size_t n)
{
	char *c;
	size_t i;

	i=0;
	c1=(char *)s;
	while(i<n)
	{
		*c1='\0';
		c1++;
		i++;
	}
}
