#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s;
    int n;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    getchar();
    s=(char*)calloc(n,sizeof(char));
    printf("enter the string:");
    fgets(s,n+1,stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i]=s[i]-32;
            printf("%c\n",s[i]);

        }
    }
    puts(s);
    return 0;



}