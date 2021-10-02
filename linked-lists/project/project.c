#include "stdio.h"
#include "string.h"

#define LANE_SIZE 8
#define MAX_HASH_LISTS 32

struct map
{
	char lane[32];
	struct layout_map *next;
};

struct layout_map map[MAX_HASH_LISTS];

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
			return i;
	}
	if (i < LANE_SIZE)
	{
		strcpy(map_table[i].lane, lane);
		map_table[i].no = v;
		return i;
	}
	return -1;
}	

int dump_map_table(void)
{
	int i=0;

	for(i=0; i<= LANE_SIZE;i++)
	{
		if (strlen(map_table[i].lane) == 0)
			break;
		printf("%d. %s, %d\n", i+1, map_table[i].lane, map_table[i].no);
	}
}
int add_node_hlist(int villa, int hk)
{
	struct villa *t=NULL,*p=NULL;
	p=malloc(sizeof(struct villa));
	p->no=v;
	p->next = NULL;
	if(h[hk]==NULL)
	{
		h[hk]=p;
		return 0;
	}
	t=h[hk];
	for(t=h[hk];t->next!=NULL;t=t->next);
	t->next=p;
	return 0;

	//Create node and add to hashed list
	//Input hash_key, node_value
}
int get_index_byval(int v)
{
	int i = 0;
	struct villa *t = h[i];
	for(i = 0; i <= MAX_HASH_LISTS; i++)
	{
		while(t != NULL)
		{
			t = t->next;
			if(t->no == v)
			 return i;
		}

	}
	return -1;
}


int addnode(int v, char *lane)
{
	int hk, i = 0;
	hk = get_lane_pos(v, lane);
	add_node_hlist(hk, v)

	return 0;
}	
int get_pos_by_value( int index, int vno)
{
	int t=hlist[index]; 
	for(i=0;h[index]->next!=v->index;i++)
	{
		if(t->vno==vno)
			return i;
	}	
	return -1;
}	
int hlist_get_index_by_val( int vno)
{
	struct villa *t=NULL,*t=NULL;
	for(t=0;t!=NULL;t=t->next)
	{
		if(t->vno==vno)
			return i;
	}	
	return -1;
}
int get_lane_by_map( int index)
{
	return map[index];
}	
	
int get_route_map(int villa)
{
	int index,vpos;
	char lane[32];
	index= hlist_get_index_by_val(vno);
	vpos=get_pos_by_val(index ,vpos
	lane=get_lane_by_map(index);
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
	dump_map_table();
	dump_hash_list();

	get_route_map(110)
	return 0;
}	
