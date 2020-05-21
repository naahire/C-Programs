#include <stdio.h>

void margesort(int x[],int low,high);
//Declaration of marge sort function 
//Tere are void returnbl type. 
void marge(int x[],int low,int mid,int high);
//These are marge function they will first marge the array
int main()
{
int a[20],i,n;
	printf("Enter the How many Elements ");
	scanf("%d",&n);
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
	margesort(a,0,n-1);
	printf("Sorted Elements are \n");
for(i=0;i<n;i++)
{
	printf("\t%d",a[i]);
}
}
void margesort(int x[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		margesort(x,low, mid);
		margesort(x,mid+1,high);
		marge(x,low,mid,high);
	}
}
void marge(int x[],int low,int mid,int high)
{
int i,j,k=0,z[low+high];
	i=low;
	j=mid+1;
	
while((i<=mid)&&(j<=high))
{
	if(x[i]<x[j])
	{
		z[k]=x[i];
		k++;
		i++;
	}
	else
	{
		z[k]=x[j];
		k++;
		j++;
	}
}
while(i<=mid)
{
		z[k]=x[i];
		k++;
		i++;
}
while(j<=high)
{
	z[k]=x[j];
		k++;
		j++;
}
for(i=low;i<high;i++)
{
	x[i]=z[i-low];
}
}
