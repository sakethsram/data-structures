char *index(char *s , int c)
{
	int i=0;
	for(i=0;s[i]!='/0' ;i++)
	{
		if(s[i]==c)
			return &(s[i]);
	}
	return NULL;
}	
