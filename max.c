#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the length of the array:\n");
	scanf("%d",&n);
	getchar();
    int *s;
    s=(int*)calloc(n,sizeof(int));
    printf("enter array values:\n");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&s[i]);
    }
    int max=s[0];
    for(int i=0;i<n;i++)
    {
    	if(s[i]>max)
    	{
    		max=s[i];
    	}
    }
    printf("the maximum value is=%d",max);
    free(s);
    return 0;
    }
      
