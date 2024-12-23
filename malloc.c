#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter how many nos u want to enter");
	scanf("%d",&n);
	int *p;
	p=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		printf("enter the number %d=",i);
		scanf("%d\n",&p[i]);
	}
	printf("the numbers are=");
	for(int i=0;i<n;i++)
	{
		printf("number %d=%d",i,p[i]);
		
	}
	return 0;
}
