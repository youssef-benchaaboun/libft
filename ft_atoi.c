#include"libft.h"
#include <stdlib.h>
int ft_atoi(const char *s)
{
	int re;
	int sg;
	int i;

	sg=1;
	re=0;
	i=0;
	while( (s[i]<=13 && s[i]>=9) || s[i]==' ')
	       	i++; 
	if(s[i]=='-' || s[i]=='+') 
	{ 	if(s[i]=='-') 
			sg=-1; 
		i++; 
	}
	while(s[i]<='9' && s[i]>='0')
       	{  re=re*10 + (s[i] - '0'); 
		i++; 
	} 
	return sg*re; 
}
/*#include<stdio.h> 
int main() 
{ printf("number is %d\n",ft_atoi("   -1")); 
  printf("number is%d\n",atoi("   -1"));
}*/
