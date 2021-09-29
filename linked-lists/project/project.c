#include "stdio.h"
#include "string.h"
struct hash
{
	char lane[128];
	int no;
};
struct hash h[32];
int n=0;
int cmp(char loc[32])
{
	int i=0;
	while (i<=32)
	{
		if(strcmp(h[i].lane,loc)==0)
			break;
		if(strlen(h[i].lane)==0)
			break;
		i++;	
	}
}	
int dumplist(void)
{
	int i=0;
	for(i=0;i<=7;i++)
	printf("\n  villa %d lane: %s \n",h[i].no,h[i].lane);
}
int addnode(int v,char pos[32])
{
	int  n;
	n=cmp(pos);
	strcpy(h[n].lane,pos);
	h[n].no=v;
	return 0;
}	
int main()
{
	addnode(112,"2ll");
	dumplist();
	addnode(114,"2lR");
	dumplist();
	return 0;
	addnode(85,"1ll");
	addnode(86,"2Rl");
	addnode(93,"2ll");
	addnode(103,"2ll");
	addnode(89,"2ll");
	addnode(104,"2ll");
	addnode(1,"2ll");
	addnode(112,"2ll");
	dumplist();
}	
