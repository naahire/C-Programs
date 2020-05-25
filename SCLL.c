#include <stdio.h>
#include <malloc.h>
struct node
{
	int info;
	struct node *next;
};
struct node *create(struct node *head)
{
	struct node *temp=NULL,*p=NULL;
	int i,n;
	printf("Enter the how many Elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{p=(struct node *)malloc(sizeof(struct node));
		printf("Enter the Actual Elements ");
		scanf("%d",&p->info);
		if(head==NULL)
		{
			head=temp=p;
			temp->next=head;
		}
		else
		{
			p->next=head;
			temp->next=p;
			temp=p;
		}
	}
	return head;
}
void display(struct node *head)
{
	struct node *temp=NULL;
	temp=head->next;
		printf("\t%d",head->info);
	while(temp!=head)
	{
		printf("\t%d",temp->info);
		temp=temp->next;
	}
}
int main()
{
struct node *head=NULL;
int ch;
do
{
printf("1.Create\n2.Display\n3.Insert\n4.Exit\nEnter your Choice \n");
scanf("%d",&ch);	
switch(ch)
{
case 1:head=create(head);
	break;
case 2:	display(head);
	break;	
}
}while(ch!=3);
}
