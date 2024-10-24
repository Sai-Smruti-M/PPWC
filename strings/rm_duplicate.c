//Qn-Remove duplicates from the string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j=0;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    getchar();


    char *s,*new;
    s=(char*)calloc(n,sizeof(char));
    new=(char*)calloc(n,sizeof(char));
    printf("enter the string:");
    fgets(s,n,stdin);
    char referred[256]={0};
    for(int i=0;s[i]!='\0';i++)
    {
        if(!referred[s[i]])
        {
            referred[s[i]]++;
            new[j++]=s[i];

        }
    }
    printf("The new string formed is=");
    puts(new);


}
// ./a.exe
// Enter the length of the string:20
// enter the string:hhhheeeelllllllloooo
// The new string formed is=helo