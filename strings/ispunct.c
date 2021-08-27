int ispunt(int a)
{
	int j=0;
	if(a>=0 && a<=9)
		j++;
	if(a>='a' && a<='z')
		j++;
	if(a>='A' && a<='Z')
		j++;
	if(a!= ' ')
		j++;
	return j;
}

