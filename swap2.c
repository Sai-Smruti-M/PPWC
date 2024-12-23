#include<stdio.h>
int swap(int *a,int *b)
{
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
	
	
}
int main()
{
	int c,d;
	printf("enter 2 nos a and b=");
	scanf("%d %d",&c,&d);
	swap(&c,&d);
	printf("After swap a=%d and b=%d\n",c,d);
}
