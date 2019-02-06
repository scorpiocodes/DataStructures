#include <stdio.h>
#include<string.h>

struct node{
    int val;
    struct node *next;
}*head;

void createlist(int n)
{
    struct node *first,*new1,*temp;
    int data,i;
    head = (struct node *)malloc (sizeof(struct node));
    
    printf("Enter value 1:\n");
    scanf("%d",&data);
    head->val = data;
    head->next = NULL;
    
    temp = head;
    
    for(i=2;i<=n;i++)
    {
        new1 = (struct node *)malloc (sizeof(struct node));
        printf("Enter value %d:\n",i);
        scanf("%d",&data);
        new1->val = data;
        new1->next = NULL;
        
        temp->next = new1;
        temp = new1;
    }
    printf("SUCCESSFULLY CREATED LIST\n");
}

void reverselist()
{
    struct node *prev,*cur,*temp;
    
    prev = head;
    cur = head->next;
    head = head->next;
    
    prev->next = NULL;
    
    while(cur!=NULL)
    {
        head = head->next;
        cur->next = prev;
        prev = cur;
        cur = head;
    }
    
    head = prev;
    
    printf("LIST REVERSED\n");
}

void display()
{
    struct node *temp;
    
    temp = head;
    
    while(temp!=NULL)
    {
        printf("%d=>",temp->val);
        temp = temp->next;
    }
    printf("end of list\n");
}
int main()
{
    int n;
    printf("Enter  n:\n");
    scanf("%d",&n);
    createlist(n);
    reverselist();
    display();

    return 0;
}
