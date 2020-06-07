#include <stdio.h>
#define max 10
struct queue
{
	int data[max];
	int front,rear;	
};
void initq(struct queue *pq)
{
	pq->front=pq->rear=-1;
}
int isfull(struct queue *pq)
{
	return(pq->rear==max-1);
}
void addq(struct queue *pq,int x)
{
	pq->rear++;
	pq->data[pq->rear]=x;
}
int isempty(struct queue *pq)
{
	if(pq->rear==pq->front)
	return 1;
	else
	return 0;
}
int removeq(struct queue *pq)
{
	int x;
	pq->front++;
	x=pq->data[pq->front];
	return x;
}
int peek(struct queue *pq)
{
	return (pq->data[pq->rear]);
}
int main()
{
	struct queue s;
	int n,ch;
	initq(&s);
	do
	{
printf("1.Add\n2.Remove\n3.Peek\n4..Exit");
printf("\nEnter your choice ");
scanf("%d",&ch); 
switch(ch)
{
case 1:if(isfull(&s))
	printf("\nQueue is Overflow ");
       else
	{
		printf("\nEneter the value to Add ");
		scanf("%d",&n);
		addq(&s,n);
	}
      	break;
case 2:if(isempty(&s))
	printf("\nQueue is Underflow ");
       else
	{
   	    printf("\nRemoved is %d\n",removeq(&s));
   	 } 
      	break;
case 3:
    	printf("\nPeek Element is %d\n",peek(&s));
    	break; 	
}	}while(ch!=4);
  
}
