#include "defs.h"
#include "stdlib.h"

struct student *h=NULL;

int main()
{
	add_node(10);
	add_node(20);
	add_node(20);
	add_beg(5);
	add_node(50);
	dumplist();
	add_node(90);
	dumplist();
	get_count();
	//TODO:
	//Del first node
	//Del node which does not exists
	//Del no nodes
	del_node_by_val(5);
	dumplist();
	return 0;
	get_node_value_by_pos(10);
	add_node(100);
	dumplist();
	del_node_by_val(200);
	dumplist();
}	
