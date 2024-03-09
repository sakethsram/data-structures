struct st 
{
	int marks;
	struct student *next;
};	

int add_node(int n);
int add_beg(int v);
int del_node_value_by_pos(int pos);
int get_node_value_by_pos(int pos);
int del_node_by_val(int v);
int valbypos(int x);
int posbyval(int v);
int get_count ();
int midval();
int add_node(int v);
int dumplist();
int reverse_list();
int update_node_by_val(int ov,int nv);
int update_all_node_by_val(int ov,int nv);
int insert_node_by_pos(int val,int pos);
int orderd_insert(int val);
int ordered_insert(int val);
int find_the_order();
int ordered_insert_in_circular_list(int val);
int add_node_to_circular_list(int val);
int find_order_in_circular_list(); 
int get_hashkey(int v);
int add_node_hash(int v);
