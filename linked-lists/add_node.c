#include "stdio.h"
#include "stdlib.h"
struct student 
{
	int no;
	struct student *next;
};	
struct student *h;
int add_node(int v)
{
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	struct student *p=NULL,*t=NULL;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	p=(struct student*)malloc(sizeof(struct student));
	t=h;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	p->no=v;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	p->next=NULL;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	if(h==NULL)
	{
		h=p;
		printf("%d:%s\n", __LINE__, __FUNCTION__);
		return 0;
	}
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	while(t->next!=NULL)
	{
		t=t->next;
		printf("%d:%s\n", __LINE__, __FUNCTION__);
	}
	t->next=p;
	printf("%d:%s\n", __LINE__, __FUNCTION__);
	return 0;
}
int dumplist()
{
	struct student *t=h;
	printf("\n node value=%d \n\n",t->no);
}	
int main()
{
	printf(" first  node: \n\n");
	add_node(10);
	dumplist();
	/*printf(" second  node: \n\n");
	add_node(20);
	dumplist();
	printf(" third  node: \n\n");
	add_node(30);
	dumplist();
	*/
}	
