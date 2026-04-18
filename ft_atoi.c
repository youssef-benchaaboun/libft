int ft_atoi(const char *s)
{
	int re;
	int sg;

	sg=1;
	re=0;
	if(*s=='-' || *s=='+')
	{
		if(*s=='-')
			sg=-1;
		s++;
	}
	while(*s<='9' && *s>='0')
	{
		re=re*10 + (*s - '0');
		s++;
	}
	return sg*re;
}
