/*
Enter the No 5
     
    1 
   2 3 
  4 5 6 
 7 8 9 10 

*/
#include <stdio.h>
int main()
{
	int i,j,k,l,n,m=1;
	printf("Enter the No ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=0;j<n;j++)
	    {
	    	if(j>=i)
	    	{
	    		printf("%d ",m++);
	    		
	    	}
	    	else
	    	{
		  printf(" "); 	
	    		}
	    			   
	    }
	    printf("\n");
	}
	
}