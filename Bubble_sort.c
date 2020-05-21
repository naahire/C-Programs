//Create the Bubblesort Program
#include <stdio.h>
void bubblesort(int x[],int n);
int main()
{
int a[20],i,n;
	printf("Enter the How many Elements ");
	scanf("%d",&n);
	//Enter the N no of values using Array
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
	bubblesort(a,n);
	//Call the bubblesort function
}
//Declaration of Bubblesort function
void bubblesort(int x[],int n)
{
	int i,j,k,key,pos,temp;
	//Sort the array Using Bubblesort
	for(pos=0;pos<n;pos++)
	{
		for(i=0;i<n-pos;i++)
		{
			if(x[i]>x[i+1])
			{
			temp=x[i];
			x[i]=x[i+1];
		  x[i+1]=temp;
			}
	    }
	 }
	printf("\nSorted Element's are \n");
	for(i=0;i<n;i++)
	{
		printf("\t%d",x[i]);
	}
}
