#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdst;
	char	*csrc;
	size_t	i;

	cdst = (char *)dest;
	csrc = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	}
	else
	{
		while ((int)(--n) >= 0)
		{
			*(cdst + n) = *(csrc + n);
		}
	}
	return (dest);
}
