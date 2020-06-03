#include <stdio.h>
#include <malloc.h>
struct stack
{
	int info;
	struct stack *next;
};
struct stack  *top;
inits()
{
    top=NULL;
}
void push(int x)
{
	struct stack *p=NULL;
	p=(struct stack *)malloc(sizeof(struct stack));
	p->info=x;
	p->next=NULL;
	p->next=top;
	top=p;
}
int pop()
{
	int x;
	struct stack *p=NULL;
	p=top;
	x=p->info;
	top=p->next;
	free(p);
	return x;
}
int peek()
{
	int x;
	x=top->info;
	return x;
}
int main()
{
	int n,ch;
	inits();
do
{
printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit\nEnter the choice ");
scanf("%d",&ch);
switch(ch)
{
case 1:
       	printf("Enter the Value to Push ");
       	scanf("%d",&n);
       	push(n);
 break;
 case 2:
       	printf("The Poped Element is %d ",pop());
      
 break;
case 3:printf("\nThe Element of The Top is %d ",peek());
 break;
}			
}while(ch!=4);	
	
}
