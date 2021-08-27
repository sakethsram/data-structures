#include "stdio.h"
#include "string.h"
struct student
{
	int no;
	struct student *next;
};
int main()
{
	struct student s1,s2,s3, *p;
	s1.no=10;
	s2.no=20;
	s3.no=30;
	p=&s1;
	s1.next = &s2;
	s2.next = &s3;
	s3.next = NULL;
	while(p!=NULL)
	{
		printf("%d\n\n",p -> no);
		printf("%p\n\n",p -> next );
		p=p->next;
	}
}
