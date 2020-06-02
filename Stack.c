#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() 
{
   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull()
{
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}
int peek() 
{
   return stack[top];
}
int pop() 
{
   int data;
	
   if(!isempty())
    {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
int push(int data)
 {

   if(!isfull())
    {
      top = top + 1;   
      stack[top] = data;
   } else {
  printf("Could not insert data, Stack is full.\n");
   }
}
int main()
{
   // push items on to the stack 
   int ch,data,v;
do
{
printf("1.Push\n2.Pop\n3.peek\n4.Isfull\n5.Isempty\n6.Exit");
printf("\nEnter your choice ");
scanf("%d",&ch); 
switch(ch)
{
case 1:printf("\nEnter your value ");
       scanf("%d",&v);
    	push(v);
      	break;
case 2: data=pop();
   	    printf("%d\n",data); 
      	break;
case 3:
      	data=peek();
    	printf("%d\n",data);
    	break; 	
case 4:
        printf("Stack full: %s\n" , isfull()?"true":"false");
   	    break;
case 5:
       printf("Stack empty: %s\n" , isempty()?"true":"false");
        break;
}	
}while(ch!=6);  
}
