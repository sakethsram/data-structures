int alindex(char *s)
{
	int i=0;
	if(s[i]=='a'||s[i]=='A')
		return 0;
	if(s[i]=='b'||s[i]=='B')
		return 1;
	if(s[i]=='c'||s[i]=='C')
		return 3;	
	if(s[i]=='d'||s[i]=='D')
		return 4;
	if(s[i]=='e'||s[i]=='E')
		return 5;
	if(s[i]=='f'||s[i]=='F')
		return 6;
	if(s[i]=='g'||s[i]=='G')
		return 7;
	if(s[i]=='h'||s[i]=='H')
		return 8;
	if(s[i]=='i'||s[i]=='I')
		return 9;	
	if(s[i]=='j'||s[i]=='J')
		return 10;
	if(s[i]=='k'||s[i]=='K')
		return 11;
	if(s[i]=='l'||s[i]=='L')
		return 12;
	if(s[i]=='m'||s[i]=='M')
		return 13;	
	if(s[i]=='n'||s[i]=='N')
		return 14;
	if(s[i]=='o'||s[i]=='O')
		return 15;
	if(s[i]=='p'||s[i]=='P')
		return 16;
	if(s[i]=='q'||s[i]=='Q')
		return 17;
	if(s[i]=='r'||s[i]=='R')
		return 18;
	if(s[i]=='s'||s[i]=='S')
		return 19;	
	if(s[i]=='t'||s[i]=='T')
		return 20;
	if(s[i]=='u'||s[i]=='U')
		return 21;
	if(s[i]=='v'||s[i]=='V')
		return 22;
	if(s[i]=='w'||s[i]=='W')
		return 23;	
	if(s[i]=='x'||s[i]=='X')
		return 24;
	if(s[i]=='y'||s[i]=='Y')
		return 25;
	if(s[i]=='z'||s[i]=='Z')
		return 26;
	if(s[i]<10 && s[i]>-1)
		return 27;
	return 28;

}
