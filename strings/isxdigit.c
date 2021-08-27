int isxdigit(int a)
{
	int j=0;
	if(a>=0 && a<=9)
		j++;
	if(a>='a' && a<='f')
		j++;
	if(a>='A' && a<='F')
		j++;
	if(j>0)
		return 1;
	return 0;
}

