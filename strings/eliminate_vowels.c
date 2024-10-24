//Qn-eliminate the vowels present in the string
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,j=0;
    printf("enter the length of the string=");
    scanf("%d",&n);
    getchar();
    char *s,*wv;
    s=(char*)calloc(n,sizeof(char));
    wv=(char*)calloc(n,sizeof(char));
    printf("enter the string:");
    fgets(s,n+1,stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
        {
            wv[j++]=s[i];

        }
    }
    puts(wv);
    free(s);
    free(wv);


}
// ./a.exe            
// enter the length of the string=7
// enter the string:saeioum 
// sm
