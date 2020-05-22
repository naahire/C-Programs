#include <stdio.h>
#include <malloc.h>
//Crete the stucture for Node Declaration
struct node
 {
 	int info;
 	struct node *next;
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
 			temp=p;
 		}
 	}
 	return head;
 }
//Enter the particular position one element 
 struct node *insert(struct node *head,int pos)
 {
 	struct node *temp=head,*p;
 	int i;
 	p=(struct node *)malloc(sizeof(struct node));
 	printf("Enter the data ");
 	scanf("%d",&p->info);
 	if(pos==1)
 	{
 		p->next=head;
 		head=p;
 	}
 	else
 	{
 		i=1;
 		while(i<pos-1)
 		{
 			temp=temp->next;
 			i++;
 		}
 		p->next=temp->next;
 		temp->next=p;
 		temp=p;
 	}
 	return head;
 }
 //Delete the particular element in linked list
 struct node *del(struct node *head,int pos)
 {
struct node *temp=head,*p;
 	int i;
 	if(pos==1)
 	{
 		p=head;
 		head=head->next;
 		free(p);
 	}
 	else
 	{
 		i=1;
 		while(i<pos-1)
 		{
 			temp=temp->next;
 			i++;
 		}
 		p=temp->next;
 		temp->next=p->next;
 		free(p);
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
