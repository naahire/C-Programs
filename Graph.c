#include <stdio.h>
int a[30][30],n;
int main()
{
	void adjmat();
	void degree();
	adjmat();
	degree();
}
void adjmat()
{
	int i,j;
	int rc,cc;
	printf("Enter the Number of Vertices ");
	scanf("%d",&n);
	printf("Enter the Graph Details ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	printf("Edge Between V %d to V %d ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}
	}printf("\nYour matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\nYour adjacent matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[j][i]);
		}
		printf("\n");
	}
}
void degree()
{
	int i,j,rc,cc;
	printf("\nVector\tOutdegree\tIndegree\tTotal Degree");
	for(i=0;i<n;i++)
	{
		rc=cc=0;
		for(j=0;j<n;j++)
		{
			rc=rc+a[j][i];
			cc=cc+a[i][j];
		}
	printf("\n%d\t%d\t%d\t%d",1+i,cc,rc,rc+cc);
	}	
}
