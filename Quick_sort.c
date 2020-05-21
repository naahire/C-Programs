#include<stdio.h>
int partition(int x[],int lb,int ub);
int quicksort(int x[],int lb,int ub);
int main()
{
  int x[10],i,n;
  printf("How many values :");
  scanf("%d",&n);
  printf("\nEnter the Actual Values :\n");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}

quicksort(x,0,n-1);

printf("\nThe sorted Elements are \n");
for(i=0;i<n;i++)
{
printf("\t%d\n",x[i]);
}
}
int quicksort(int x[],int lb,int ub)
{
int j,i=lb;
if(lb<ub)
{
  j=partition(x,lb,ub);
  quicksort(x,lb,j-1);
  quicksort(x,i+1,ub);
}
}

int partition(int x[],int lb,int ub)
{
 int i,j,pivot,temp;
 i=lb+1;
 j=ub;
 pivot=x[lb];

do
{
  while((x[i]<pivot)&&(i<=ub))
   i++;
  while((x[j]>pivot)&&(j>lb))
   j--;

  if(i<j)
  {
   temp=x[i];
   x[i]=x[j];
   x[j]=temp;
  }
}while(i<j);

x[lb]=x[j];
x[j]=pivot;

return j;
}

