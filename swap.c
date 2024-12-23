#include<stdio.h>
int swap(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap a=%d and b=%d",a,b);
	
}
int main()
{
	int c,d;
	printf("enter 2 nos=");
	scanf("%d %d",&c,&d);
	swap(c,d);
}
