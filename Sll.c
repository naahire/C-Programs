#include <stdio.h>
#include "SLL.h"
#include <malloc.h>
int main()
{
	struct node *head=NULL;
	
 	int pos,ch;
do
{
	printf("\n1.create\n2.insert\n3.delete\n4.display\n5.Exit\n");
		printf("Enter your Choice ");
		scanf("%d",&ch);
switch(ch)
{
case 1:head=create(head);
			break;
case 2:printf("Enter position ");
		scanf("%d",&pos);
			head=insert(head,pos);
			break;	
case 3:printf("Enter position ");
		scanf("%d",&pos);
			head=del(head,pos);
			break;	
case 4:display(head);	
		break;	
}
}while(ch!=5);	
}
