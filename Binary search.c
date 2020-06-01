#include <stdio.h>
int linearsearch(int x[],int n,int key);
int main()
{
	int x[10],i,n,key,pos;
	printf("\nHow many values ");
	scanf("%d",&n);
	printf("\nEnter actual values ");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	printf("\t%d",x[i]);
	printf("\nEnter the value to search ");
	scanf("%d",&key);
	linearsearch(x,n,key);
}

int linearsearch(int x[],int n,int key)
{
	int i,k=0,m=0,c=0;
	for(i=0;i<n;i++)
	{		
		m++;
		if(x[i]==key)
		{
			k=1;
			c=m;
		}

	}
	if(k==0)
	{
		printf("Elements not found ");
	}
	else
	{
				printf("Elements found at %d position",m);
	}
	return 0;
}
