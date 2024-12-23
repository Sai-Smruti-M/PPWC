#include<stdio.h>
#include<string.h>


struct student
{
	char name[20];
	int roll_no;
	float marks;
	struct dob
	{
		int day;
		int month;
		int year;
	}birthday;
};
void printinfo(struct student s)
{
	
	printf("%s\t",s.name);
	printf("%d\t",s.roll_no);
	printf("%.2f\t",s.marks);
  
	printf("\n");
	
}
int main()
{
	
	 int n;
	 struct student s[n];
	
	 
	 
	 printf("enter the no of students=");
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
	   printf("enter the name, roll no and marks os the student %d:",i+1);
	   scanf("%s %d %f",s[i].name,&s[i].roll_no,&s[i].marks);
	  }
	  for(int i=0;i<n;i++)
	  {
	    printf("Address= %u\t size=%zu bytes \t",(void *)&s[i],sizeof(s));
	  	printinfo(s[i]);
	  	
	  }
	  return 0;
	  
	
}
	 
	 
