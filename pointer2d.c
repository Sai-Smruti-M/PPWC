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
	int arr2[m][n];
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter arr1[%d][%d]=",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter arr2[%d][%d]=",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]+arr2[i][j]);
			
		
		}
		printf("\n");
	}
	return 0;
}
			
