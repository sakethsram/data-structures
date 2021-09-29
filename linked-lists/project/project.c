#include "stdio.h"
#include "string.h"

#define LANE_SIZE 8

struct hash
{
	char lane[128];
	int no;
};

struct hash map_table[LANE_SIZE];

int get_lane_pos(int v, char *lane)
{
	int i=0;

	for (i = 0; i <= LANE_SIZE; i++)
	{
		if(strlen(map_table[i].lane)==0)
			break;

		if(strcmp(map_table[i].lane, lane)== 0)
			break;
	}

	if (i < LANE_SIZE)
	{
		strcpy(map_table[i].lane, lane);
		map_table[i].no = v;
		return i;
	}

	return -1;
}	

int dumplist(void)
{
	int i=0;

	for(i=0; i<= LANE_SIZE;i++)
	{
		if (strlen(map_table[i].lane) == 0)
			break;
		printf("%d. %s, %d\n", i+1, map_table[i].lane, map_table[i].no);
	}
}

int addnode(int v, char *lane)
{
	int n, i = 0;
	n = get_lane_pos(v, lane);
	return 0;
}	
int main()
{
	addnode(112, "2LL");
	addnode(114, "2LR");
	addnode(85,  "1LL");
	addnode(86,  "2RL");
	addnode(93,  "2LL");
	addnode(103, "2LL");
	addnode(89,  "2LL");
	addnode(104, "2LL");
	addnode(1,   "2LL");
	addnode(112, "2LL");
	dumplist();
	return 0;
}	
