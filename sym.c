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
			arr2[i][j]=arr1[j][i];
			
		
		}
		
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]);
			
		
		}
		printf("\n");
		
		
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
			
		
		}
		printf("\n");
		
	}
	printf("\n");
	int d=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr1[i][j]!=arr2[i][j])
			{
				d=1;
				break;
			}
			
				
			
		
		}
		
	}
	if(d==1)
			{
				printf("Asymmetric matrix");
			}
			else
			{
			    printf("symmetric matrix");
			 }
	
	return 0;
}
