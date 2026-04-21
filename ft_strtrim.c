#include<stdio.h>
#include <string.h>
#include<stdlib.h>
static unsigned int ft_strlen(char const *s)
{
        unsigned int i;
        i=0;
        while(s[i])
		i++;
	return i;
}
          
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
static unsigned int ft_len(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int len;
	i=0;
	len=ft_strlen(s1);
	if(len==0)
		return 0;
	while(s1[i] && ft_search(s1[i],set))
		i++;
	while((len-1) && ft_search(s1[len-1],set))
		len--;
	return len - i;
}
static void ft_effect(char *s,char const *s1, char const *set)
{
        unsigned int i;
        unsigned int len;
        i=0;
        len=0;
        while(s1[i])
        {
                while(s1[i] && ft_search(s1[i],set))
                        i++;
                while(s1[i] && len<ft_len(s1,set))
                        s[len++]=s1[i++];
        }
	s[len]='\0';
}
char *ft_strtrim(char const *s1, char const *set)
{
	char *re;
	re=malloc(ft_len(s1, set));
	if(!re)
		return NULL;
	ft_effect(re,s1,set);
	return re;
}
