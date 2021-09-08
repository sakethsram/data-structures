struct student
{
	int no;
	struct student *next;
};
int get_hashkey(int v);
int hashkey(int v);
int add_node_h(int v);
int add_node_begining(int v);
int getcount();
int add_node_begining(int v);
int del_node_by_val(int v);
void dumplist(void);

