//Qn-Create a structure and print all the address of its members
#include<stdio.h>
typedef struct student 
{
    char name[100];
    int rollno;
    float cgpa;
}st;
int main()
{
    st s={"A",3,2.3};
    printf("name=%d\n",&s.name);
    printf("roll no=%d\n",&s.rollno);
    printf("cgpa=%d\n",&s.cgpa);
    return 0;
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe             
// name=6422180
// roll no=6422280
// cgpa=6422284
