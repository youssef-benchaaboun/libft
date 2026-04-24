#include"libft.h"
static size_t ft_count_words(char const *s, char c)
{
	size_t words;
	size_t i;
	i=0;
	words=0;
	while(s[i])
	{
		while(s[i] && s[i]==c)
			i++;
		if(s[i])
			words++;
		while(s[i] && s[i]!=c)
                        i++;
	}
	return words;
}
static int ft_free(char **re,size_t index)
{
	size_t i;
	i=0;
	while(i<index)
		free(re[i++]);
	free(re);
	return 0;
}
static int ft_allocate_words(char **re,char const *s, char c)
{
	size_t words;
        size_t i;
	size_t size;
        i=0;
        words=0;
        while(s[i])
        {
                while(s[i] && s[i]==c)
                        i++;
                if(!s[i])
			break;
		size=0;
               	while(s[i] && s[i]!=c)
		{
			size++;
                    	i++;
		}
		re[words]=malloc(size+1);
		if(!re[words++])
			return ft_free(re,words-1);
        }
	return 1;
}
static void ft_assigning(char **re,char const *s, char c)
{
	size_t words;
        size_t i;
        size_t size;
        i=0;
        words=0;
        while(s[i])
        {
                while(s[i] && s[i]==c)
                        i++;
                if(!s[i])
			break;
                size=0;
                while(s[i] && s[i]!=c)
			re[words][size++]=s[i++];
                re[words++][size]='\0';
        }
	re[words]=NULL;
}
char **ft_split(char const *s, char c)
{
	char **re;
	if(!s)
		return NULL;
	re=malloc((ft_count_words(s,c)+1)*sizeof(char *));
	if(!re)
		return NULL;
	if(!ft_allocate_words(re,s,c))
		return NULL;
	ft_assigning(re,s,c);
	return re;
}
/*#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

void	print_split(char **tab)
{
	int i = 0;

	while (tab[i])
	{
		printf("[%d]: \"%s\"\n", i, tab[i]);
		i++;
	}
	printf("---- END ----\n");
}

void	free_split(char **tab)
{
	int i = 0;

	while (tab[i])
		free(tab[i++]);
	free(tab);
}

int	main(void)
{
	char **r;

	r = ft_split("hello world 42", ' ');
	print_split(r);
	free_split(r);

	r = ft_split("   hello   world   ", ' ');
	print_split(r);
	free_split(r);

	r = ft_split("aaaaa", 'a');
	print_split(r);
	free_split(r);

	r = ft_split("", ' ');
	print_split(r);
	free_split(r);

	r = ft_split("one,two,three", ',');
	print_split(r);
	free_split(r);

	return (0);
}*/
