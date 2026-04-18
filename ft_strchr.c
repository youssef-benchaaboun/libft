char *ft_strchr(const char *s, int c)
{
	char t;
	t=(char)c;
	while(*s != t)
	{
		if(*s=='\0')
			return NULL;
		s++;
	}
	return (char *)s;
}
//instead of condtion in searchinf inide we can do condtion while tgey are diffrent

