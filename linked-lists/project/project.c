#include "stdio.h"
#include "string.h"
#include "stdlib.h"

#define LANE_SIZE 8
#define MAX_HASH_LISTS 6

struct layout_map
{
	int villa;
	struct layout_map *next;
};
struct layout_map *hlist[MAX_HASH_LISTS];

struct map_table
{
	char lane[128];
	int no;
};
struct map_table mtable[LANE_SIZE];

void dump_hashed_list(void)
{
	struct layout_map *t;
	int i = 0;

	/*
	for(i = 1; i <= MAX_HASH_LISTS; i++)
		printf("%5d", i);
	printf("\n");
	*/

	for(i = 0; i <= MAX_HASH_LISTS; i++)
	{
		printf("%5d", i);
		for(t = hlist[i]; t != NULL; t = t->next)	
			printf("%5d", t->villa);
		printf("\n");
	}
	printf("\n");
}	

int get_lane_pos(int v, char *lane)
{
	int i=0;

	for (i = 0; i <= LANE_SIZE; i++)
	{
		if(strlen(mtable[i].lane)==0)
			break;

		if(strcmp(mtable[i].lane, lane)== 0)
			return i;
	}

	if (i < LANE_SIZE)
	{
		strcpy(mtable[i].lane, lane);
		mtable[i].no = v;
		return i;
	}

	return -1;
}	

int dump_map_table(void)
{
	int i=0;

	for(i=0; i<= LANE_SIZE;i++)
	{
		if (strlen(mtable[i].lane) == 0)
			break;
		printf("%d. %s, %d\n", i+1, mtable[i].lane, mtable[i].no);
	}
	printf("\n");
}

int add_node_hlist(int villa, int hk)
{
	struct layout_map *t=NULL,*p=NULL;
	p=malloc(sizeof(struct layout_map));
	p->villa = villa;
	p->next = NULL;
	if(hlist[hk]==NULL)
	{
		hlist[hk]=p;
		return 0;
	}
	t=hlist[hk];
	for(t=hlist[hk];t->next!=NULL;t=t->next);
	t->next=p;

	return 0;

	//Create node and add to hashed list
	//Input hash_key, node_value
}

int get_index_byval(int v)
{
	int i = 0;
	struct layout_map *t = hlist[i];
	for(t = hlist[i], i = 0; i <= MAX_HASH_LISTS; i++)
	{
		for(;t != NULL; t = t->next)
		{
			if(t->villa == v)
				return i;
		}
	}
	return -1;
}


int addnode(int villa, char *lane)
{
	int hk, i = 0;
	hk = get_lane_pos(villa, lane);
	printf("hk :%d\n", hk);
	dump_map_table();
	add_node_hlist(villa, hk);
	return 0;
}	

int get_pos_by_value( int index, int vno)
{
	struct layout_map *t = hlist[index]; 
	int i = 0;

	for(i=0; t != NULL; i++)
	{
		if(t->villa == vno)
			return i;
	}	
	return -1;
}	

int hlist_get_index_by_val( int vno)
{
	struct layout_map *t=NULL;
	int i = 0;

	for(t=hlist[i], i = 0; t != NULL; t = t->next, i++)
	{
		if(t->villa == vno)
			return i;
	}	
	return -1;
}

char * get_lane_by_map( int index)
{
	return mtable[index].lane;
}	
	
int get_route_map(int villa)
{
	int index,vpos;
	char *lane;
	index = hlist_get_index_by_val(villa);
	vpos=get_pos_by_value(index ,vpos);
	lane=get_lane_by_map(index);
	printf("\n\n%d villa is at :%S and at %d in pos\n\n", villa, lane, vpos);
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
	addnode(110, "2LL");
	addnode(112, "2LL");
	addnode(88,  "2RL");
	addnode(1,   "2LL");
	dump_hashed_list();
	get_route_map(110);
	return 0;
}	
