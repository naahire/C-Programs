//Sort Using Insertion sort
#include <stdio.h>
//Fun declration of insertion sort
void insertionsort(int x[],int n);
int main()
{
int a[20],i,n;
	printf("Enter the How many Elements ");
	scanf("%d",&n);
	//Accept the Array
printf("\nEnter the array %d array Elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Actual element in array ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\n");
	insertionsort(a,n);
}
//Fun Definatuion of insertion sort
void insertionsort(int x[],int n)
{
	int i,j,k,key;
	// x[k] is key element 
	for(k=1;k<n;k++)
	{
		key=x[k];
		for(i=k-1;(x[i]>key)&&(i>=0);i--)
		{
			x[i+1]=x[i];
		}
		x[i+1]=key;
	}
	printf("\nSorted Element's are \n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",x[i]);
	}
}
