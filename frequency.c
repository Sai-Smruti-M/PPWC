#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the length of the string");
    scanf("%d",&n);
    getchar();

    char *s;
    int *c;
    c=(int*)calloc(256,sizeof(int));


    s=(char*)malloc(n*sizeof(char));
    fgets(s,n+1,stdin);
    int i=0;
    while(s[i]!=0)
    {
        c[s[i]]++;
        i++;

    }
    for(int i=1;i<=256;i++)
    {
        if(c[i]>0)
        {
            printf("the character '%c' got repeated %d times\n",i,c[i]);
        }
    }
}
//  ./a.exe        
// Enter the length of the string20
// aeiouaeiouaeiouaeiou
// the character 'a' got repeated 4 times
// the character 'e' got repeated 4 times
// the character 'i' got repeated 4 times
// the character 'o' got repeated 4 times
// the character 'u' got repeated 4 times