int isalpha(int a)
{
	int j=0;
	if(a>='a' && a<='z')
		j++;
	if(a>='A' && a<='Z')
		j++;
	return j;
}

