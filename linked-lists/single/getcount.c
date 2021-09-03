extern struct student *h
int get_count ()
{
	struct student *t;
	int i=0;
	t=h;
	while(t!=NULL)
	{
		t=t->next;
		i++;
	}
	printf("\n%d\n",i);
}

