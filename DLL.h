#include <stdio.h>
#include <malloc.h>
struct node
{
	int info;
	struct node *next,*prev;	
};
 //Create the Linke List for N Number
 struct node *create(struct node *head)
 {
 	int i,n;
 	struct node *temp,*p;
 	printf("Enter the limit ");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 	p=(struct node *)malloc(sizeof(struct node));
 	printf("Enter the data ");
 	scanf("%d",&p->info);
 		if(head==NULL)
 		{
 			head=temp=p;
 		}
 		else
 		{
 			temp->next=p;
 			p->prev=temp;
 			temp=p;
 		}
 	}
 	return head;
 }
 struct node *insert(struct node *head)
 {
 	struct node *temp,*temp1,*p;
 	temp=head;
 	int pos,i;
 	printf("\nEnter the pos ");
	scanf("%d",&pos);
 	printf("Enter the value ");
 	scanf("%d",&p->info);
for(i=1;i<=pos-1&&temp!=NULL;i++)
	{
		temp=temp->next;
	}
 	if(pos==1)
 	{temp1=p->next;
 		p->next=temp1;
 		temp1->prev=p;
 		head=p;
 	}
 if(temp!=NULL)
 	{
 	temp1=temp->next;
 p->next=temp1;
 temp1->prev=p;
 p->prev=temp;
 temp->next=p;
 	p->prev=p;
 temp=p;
 	}
 	
 return head;
 }
 void display(struct node *head)
{
 	struct node *temp=head;
 	while(temp!=NULL)
 	{
 		printf("%d\t",temp->info);
 		temp=temp->next;
 	}
 	
 }
