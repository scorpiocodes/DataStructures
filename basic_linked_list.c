#include <stdio.h>
#include <string.h>

/* We need structures to implement Linked List. */
struct student
{
	int sno;
	char sname[20];
	struct student *next;
};
/* This is a self-referencing structure 
as it has a reference(next) in itself.*/

void main()
{
	struct student s[2];
	int i;

	printf("Enter the student details:\n");
	for(i=0;i<n;i++)
	{
		printf("student %d:\n",i+1);
		scanf("%d%s",&s[i].sno,s[i].sname);
	}
	/* We need to create a link between 
	s[0] and s[1] by placing s[1] address
	in s[0]'s  next */

	s[0].next = &s[1];

	/* Last element's next should be NULL*/
	s[1].next = NULL;

	printf("%p\n",s[0].next);
	printf("%p\n",s[1].next );

}