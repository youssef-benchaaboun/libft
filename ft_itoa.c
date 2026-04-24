#include"libft.h"
static unsigned int ft_len(long nb)
{
	unsigned int i;
	i=1;
	if(nb<0)
	{
		nb=-1*nb;
		i++;
	}
	while(nb>9)
	{
		nb=nb/10;
		i++;
	}
	return i;
}
char *ft_itoa(int n)
{
	char *re;
	unsigned int i;
	long nb;

	re=malloc(ft_len(n)+1);
	nb=(long)n;
	i=0;
        if(nb<0)
                nb=-1*nb;
	while(i<ft_len(n))
	{
		re[ft_len(n)-i-1]=(nb%10+'0');
		nb=nb/10;
		i++;
	}
	if(n<0)
		re[0]='-';
	re[ft_len(n)]='\0';
	return re;
}
