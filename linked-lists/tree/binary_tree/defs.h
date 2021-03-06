#define TRUE 1
#define FALSE 0
#define MAX_STACK_SIZE 10

struct node 
{
	struct node *left;
	int v;
	struct node *right;
};
extern int needle;
extern struct node *stack[MAX_STACK_SIZE];
extern struct node *root;
int push(struct node *p);
int is_single_child_parent(struct node* temp);
int is_stack_empty();
int is_leaf_node(struct node* temp);
void dump_stack(void);
struct node* pop(void);
int add_node(int val);
void inorder_traversal(void);
void preorder_traversal(void);
struct node* get_node_by_val(int val);
struct node* get_max_right_node_by_root(struct node* temp);
struct node* get_min_right_node_by_root(struct node* temp);
struct node* get_max_left_node_by_root(struct node* temp);
struct node* get_min_left_node_by_root(struct node* temp);
struct node* p_delete(int val);
int no_of_children(struct node* temp);
int search_node_by_value(int val);
int delete_node_by_value(int val);
