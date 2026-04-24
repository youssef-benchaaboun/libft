#include"libft.h"
static int ft_search(char c,char  const *s)
{
	unsigned int i;
	i=0;
	while(s[i])
	{
		if(s[i]==c)
			return 1;
		i++;
	}
	return 0;
}
static unsigned int ft_start(char const *s1, char const *set)
{
        unsigned int start;
        start=0;
        while((s1[start] && ft_search(s1[start],set)))
                start++;
        return start;
}
static unsigned int ft_stop(char const *s1, char const *set)
{
	unsigned int stop;
	stop=ft_strlen(s1);
	if(stop==0)
		return 0;
	while((stop-1) && ft_search(s1[stop-1],set))
		stop--;
	return stop - ft_start(s1,set);
}

char *ft_strtrim(char const *s1, char const *set)
{
	if(!s1 || !set)
		return NULL;
	return ft_substr(s1,ft_start(s1,set),ft_stop(s1,set));
}
