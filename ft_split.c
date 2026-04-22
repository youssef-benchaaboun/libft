#include"libft.h"
static unsigned int ft_count_words(char const *s, char c)
{
	unsigned int words;
	unsigned int i;
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
static int ft_free(char **re,unsigned int index)
{
	unsigned int i;
	i=0;
	while(i<index)
	{
		free(re[i]);
		i++;
	}
	free(re);
	return 0;
}
static int ft_allocate_words(char **re,char const *s, char c)
{
	unsigned int words;
        unsigned int i;
	unsigned int size;
        i=0;
        words=0;
        while(s[i])
        {
                while(s[i] && s[i]==c)
                        i++;
                if(s[i])
		{
                	words++;
			size=0;
               		while(s[i] && s[i]!=c)
			{
				size++;
                      		i++;
			}
			re[words-1]=malloc(size+1);
			if(!re[words-1])
				return ft_free(re,words-1);
		}
        }
	return 1;
}
static void ft_assigning(char **re,char const *s, char c)
{
	unsigned int words;
        unsigned int i;
        unsigned int size;
        i=0;
        words=0;
        while(s[i])
        {
                while(s[i] && s[i]==c)
                        i++;
                if(s[i])
                {
                        words++;
                        size=0;
                        while(s[i] && s[i]!=c)
				re[words-1][size++]=s[i++];
                        re[words-1][size]='\0';
                }
        }
	re[words]=NULL;
}
char **ft_split(char const *s, char c)
{
	char **re;
	re=malloc((ft_count_words(s,c)+1)*sizeof(char *));
	if(!re)
		return NULL;
	if(!ft_allocate_words(re,s,c))
		return NULL;
	ft_assigning(re,s,c);
	return re;
}
/*int main(int l,char ** s)
{
	char **r;
	r=ft_split(s[1],s[2][0]);
	int i=0;
	while(r[i])
		printf("word %d is %s \n",i+1,r[i++]);

}*/






















