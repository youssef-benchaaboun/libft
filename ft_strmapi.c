#include"libft.h"
static unsigned int  ft_strlen(const char *s)
{
        unsigned int i;
        i=0;
        while(s[i])
                i++;
        return i;
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *re;
	unsigned int i;

	re=malloc(ft_strlen(s)+1);
	if(!re)
		return NULL;
	i=0;
	while(s[i])
	{
		re[i]=f(i,s[i]);
		i++;
	}
	re[i]='\0';
}
	
