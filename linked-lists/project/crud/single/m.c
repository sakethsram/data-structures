#include "defs.h"
#include "stdlib.h"
struct student *h=NULL;
int main()
{
	add_node(1, "Saketh",125);
	add_node(2, "Saketh",125);
	add_node(3, "Saketh",125);
	add_node(4, "Saketh",125);
	add_node(5, "Saketh",125);
	add_node(6, "Saketh",125);
	add_node(7, "Saketh",125);
	add_node(8, "Saketh",125);
	add_node(9, "Saketh",125);
	add_node(0, "Saketh",125);
	dumplist();
	del_node_by_val(3);
	dumplist();
}	
