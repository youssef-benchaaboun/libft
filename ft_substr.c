#include"libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	if(start > ft_strlen(s))
		return ft_calloc(1,1);
	char *re;
	size_t i;
	if(len<(ft_strlen(s)-start))
		re=malloc(len+1);
	else
		re=malloc((ft_strlen(s)-start+1));
	if(!re)
		return NULL;
	i=0;
	while(s[start] && i<len)
		re[i++]=s[start++];
	re[i]='\0';
	return re;
}
