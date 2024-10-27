//QN-wap to create a structure student which takes its name through 
//dynamic allocation 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char *name; 
    int rollno;
    float marks;
};
int main()
{
    struct student s1;
    int n,m;
    printf("Enter the maximum size of name:-\n");
    scanf("%d",&n);
    s1.name=(char*)malloc(n*sizeof(char));
    
    strcpy(s1.name,"SAI");
    s1.rollno=1;
    s1.marks=202.2;
    struct student s2;
    s2.name=(char*)calloc(n,sizeof(char));
    strcpy(s2.name, "SUBHA");
    s2.rollno = 2;
    s2.marks = 203.4;
    struct student s3;
    s3.name = (char *)malloc(n*sizeof(char));  
    printf("Enter name,rollno and marks of the student:-\n");
    scanf("%s %d %f",s3.name,&s3.rollno,&s3.marks);
    printf("Student 1: %s %d %.2f\n",s1.name,s1.rollno,s1.marks);
    printf("Student 2: %s %d %.2f\n",s2.name,s2.rollno,s2.marks);
    printf("Student 3: %s %d %.2f\n",s3.name,s3.rollno,s3.marks);    
    free(s1.name);
    free(s2.name);
    free(s3.name);
    return 0;
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe
// Enter the maximum size of name:-
// 40 
// Enter name,rollno and marks of the student:-
// SHAKIBA
// 22
// 302.2
// Student 1: SAI 1 202.20
// Student 2: SUBHA 2 203.40
// Student 3: SHAKIBA 22 302.20
