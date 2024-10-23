#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    getchar();

    char *s;
    s=(char*)calloc(n,sizeof(char));
    printf("Enter the string:");
    fgets(s,n+1,stdin);
    for(int i=0;s[i]!=0;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    puts(s);
    free(s);
}