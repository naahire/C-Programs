#include "Doubly_linke_list.h"
#include <stdio.h>
#include <malloc.h>
int main()
{
struct node *head=NULL;
//head=(struct node *)malloc(sizeof(struct node));
int pos,ch;
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
case 3:
	head=insert(head);
	break;
}
}while(ch!=4);		
}
