//Qn=check if the string is a palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,count=0;
    printf("enter the length of the string:");
    scanf("%d",&n);
    getchar();

    char *s;
    s=(char*)calloc(n,sizeof(char));
    printf("enetr the string:");
    fgets(s,n+1,stdin);
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]==s[j])
        {
            count++;
            continue;
        }
        else
        {
            printf("the string is not a palindrome");
            break;

        }
    }
    if(count==n/2)
    {
        printf("the string is a palindrome");
    }
}
// ./a.exe
// enter the length of the string:7
// enetr the string:racecar
// the string is a palindrome