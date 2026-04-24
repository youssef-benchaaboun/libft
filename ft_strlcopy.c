#include "string.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	sl;
	size_t	i;

	sl = 0;
	i = 0;
	while (src[sl])
		sl++;
	while (src[i] && i < dstsize - 1 && dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize)
		dst[i] = '\0';
	return (sl);
}
// if we use unsigned int carful cause never <0 it underflow
