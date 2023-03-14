#include "defs.h"
#include "stdlib.h"
struct student *h[28];
int main()
{
	int i;
	for(i=0;i<=28;i++)
		h[i]=NULL;
	add_node(1, "apple",120);
	add_node(1, "aSple",120);
	add_node(1, "Saketh",121);
	add_node(2, "vachan",122);
	add_node(3, "bhagavan",123);
	add_node(4, "chandana",124);
	dumplist();
	del_node_by_val("apple");

}	
