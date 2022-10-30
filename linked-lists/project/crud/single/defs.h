struct student 
{
	int rno;
	char name[128];
	int marks;
	struct student *next;
};	
int get_node_value_by_pos(int n);
int add_node(int rno,char *name,int marks);
int insert_node_by_pos(int val,int pos);
int del_node_by_val(int v);
int dumplist();
