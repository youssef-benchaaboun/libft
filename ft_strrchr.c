#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		t;
	const char	*last;

	last = s;
	t = (char)c;
	while (*last)
		last++;
	while (*last != t)
	{
		if (*last == *s)
			return (NULL);
		last--;
	}
	return ((char *)last);
}
/*instead of condtion in searchinf inide 
 * we can do condtion while tgey are diffrent*/
