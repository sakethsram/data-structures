#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"

struct student
{
	char name[100];
	struct student *next;
};


struct student *h[28];

int hashkey(char v[100])
{
	return(tolower(v[0]) - 'a');
}

int add_node(char *v)
{
	struct student *t=NULL,*p=NULL;
	int hk;

	p = (struct student *)malloc(sizeof( struct student ));

	strcpy(p->name, v);
	p->next = NULL;

	hk = hashkey(v);

	t = h[hk];

	if(h[hk] == NULL)
	{
		h[hk] = p;
		return 0;
	}

	for(t = h[hk]; t->next != NULL; t = t->next);
	t->next = p;

	return 0;
}

void dumplist(void)
{
	struct student *t;
	int i = 0;

	for(i = 1; i <= 20; i++)
		printf("%5d", i);
	printf("\n");

	for(i = 1; i <= 28; i++)
	{
		for(t = h[i]; t != NULL; t = t->next)	
			printf("%15s", t->name);
		printf("\n");
	}
	printf("\n");
}	

int main()
{
	char *n1="saketh";
	char *n2="ikshwak";

	add_node(n1);
	add_node(n2);
	add_node(n2);
	add_node(n2);
	add_node(n2);
	dumplist();
}
