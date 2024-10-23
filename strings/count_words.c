//Qn-count the no of words in a sentance using dynamic allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,count=0;
    printf("Enter the length of the sentance:");
    scanf("%d",&n);
    getchar();
    char *s;
    s=(char*)calloc(n,sizeof(int));
    printf("enter the sentance:");
    fgets(s,n+1,stdin);
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]!=' ')
        {
            count++;

        }
    }
    printf("the length of the string is=%d",count);



}
