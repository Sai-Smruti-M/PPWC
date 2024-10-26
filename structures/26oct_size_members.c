//Qn-Create a structure and print the size of its members
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
    printf("name=%d\n",sizeof(s.name));
    printf("roll no=%d\n",sizeof(s.rollno));
    printf("cgpa=%d\n",sizeof(s.cgpa));
    return 0;
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe             
// name=100
// roll no=4
// cgpa=4