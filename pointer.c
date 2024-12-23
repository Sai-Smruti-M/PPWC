#include<stdio.h>
int main()
{
	int a[]={5,10,15,20,25};
	int *p;
	int *ptr[5];
	p=a;
	ptr=a;
	printf("a:%u\n",a);
	printf("&a:%u\n",&a);
	printf("&a[0]:%u\n",&a[0]);
	printf("p:%u\n",p);
	printf("ptr:%u\n",ptr);
	printf("a[0]:%d\n",a[0]);
	printf("*a:%d\n",*a);
	printf("*p:%d\n",*p);
	printf("*ptr:%d\n",*ptr);
	
