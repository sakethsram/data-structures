int tolower(int a)
{
	if(isupper(a))
		a = a - 'A' - 'a';
	return a;
}
