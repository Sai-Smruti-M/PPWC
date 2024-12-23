#include<stdio.h>
#include<string.h>


struct student
{
	char name[20];
	int roll_no;
	float marks;
};
void printinfo(struct student s)
{
	printf("%s\n",s.name);
	printf("%d\n",s.roll_no);
	printf("%.2f\n",s.marks);
}
int main()
{
	 struct student s1;
	 strcpy(s1.name,"SAI");
	 
	 s1.roll_no=42;
	 s1.marks=9.65;
	 printinfo(s1);
}
	 
	 
