#include "defs.h"
#include "stdlib.h"
struct student *h=NULL;
int main()
{
	add_node(1, "Saketh",125);
	add_node(2, "Saketh",125);
	add_node(3, "Saketh",125);
	add_node(4, "Saketh",125);
	dumplist();
	del_node_by_val(1);
	del_node_by_val(2);
	del_node_by_val(3);
	del_node_by_val(4);
	dumplist();
}	
