#include "stdio.h"
#include "defs.h"
struct  student *h[4]={NULL,NULL,NULL,NULL};
int main()
{
	 add_node_h(10);
	 add_node_h(25);
	 add_node_h(74);
	 add_node_h(100);
	 add_node_begining(15);
	 dumplist();
	 return 0;
}

		
