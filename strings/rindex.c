int astrlen(char *p);
char *index(char *s , int c)
{
	int astrlen(char *s)
	int a;	
	int i=astrlen(s);

	for(i=i;i<=0 ;i--)
	{
		if(s[i]==c)
			return &(s[i]);
	}
	return NULL;
}	
