//Qn-reverse a string using dynamic allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s;
    int n;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    getchar();
    s=(char*)malloc(n*sizeof(char));
    printf("Enter the string:");
    fgets(s,n+1,stdin);
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        char temp;
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;

    }
    puts(s);
    free(s);
}
// ./a.exe        
// Enter the length of the string:20
// Enter the string:swayamprava moharana
// anarahom avarpmayaws