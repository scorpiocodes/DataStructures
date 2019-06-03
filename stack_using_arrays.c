/*  STACK IMPPLEMENTATION USING ARRAY  */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 10


int st[SIZE];
int top=-1;


void push()
{
	if(top==SIZE-1)
	{
		printf("Stack overflow!!\n\n");
	}
	else
	{
		printf("Enter number to be pushed: ");
		scanf("%d",&st[++top]);	
		printf("pushed %d!!\n\n",st[top]);
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Stack underflow!!\n\n");
	}
	else
	{
		int x = st[top];
		top--;
		printf("popped %d!!\n\n",x);
	}
}

void peak()
{
	if(top==-1)
	{
		printf("Stack is empty!!\n\n");
	}
	else
	{
		printf("peak element is %d!!\n\n",st[top]);
	}
}

void main()
{
	int i;
	while(1)
	{
		printf("Choose operation to be performed on stack:\n1.push\n2.pop\n3.peak\n4.exit\n\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1: push(); break;
			case 2: pop(); break;
			case 3: peak(); break;
			case 4: exit(0);
		}
	}
	
}
