#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s;
    int n,vowels=0,consonant=0;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    s=(char*)calloc(n,sizeof(char));
    printf("Enter the string:");
    getchar();
    fgets(s,n+1,stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]=s[i]+32;

        }
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonant++;
            printf("the consonant %d is '%c'\n",consonant,s[i]);
        }
    }
    printf("the count of vowels is=%d and consonant is=%d",vowels,consonant);
    return 0;
}