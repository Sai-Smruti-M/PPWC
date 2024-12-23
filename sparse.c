#include<stdio.h>
int main()
{
	int i,j;
	int m,n;
	printf("enter the value of m=");
	scanf("%d",&m);
	
	printf("enter the value of n=");
	scanf("%d",&n);
	
	
	int arr1[m][n];
	
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter arr1[%d][%d]=",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	int c=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		 if(arr1[i][j]==0)
			c=c+1;
		}
		printf("\n");
	}
	if(c>=m*n/2)
	{
		printf("sparse matrix\n");
	}
	else
	{
		printf("not a sparse matrix\n");
	}
	return 0;
}
