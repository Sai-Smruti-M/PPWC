// Write a C program that takes a string and an integer, then shifts each character in 
// the string by that number of positions in the alphabet. Handle both uppercase and 
// lowercase letters, and wrap around the alphabet if needed (e.g., shifting 'z' by 1
// should give 'a').
#include<stdio.h>
#include<stdlib.h>
void shift(char *s,int shift)
{
    
    for(int i=0;s[i];i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=(s[i]-'a'+shift)%26+'a';
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=(s[i]-'A')%26+'A'+shift;
        }

    }
    printf("the new string formed is=");
    puts(s);
}
int main()
{
    int n,sh;
    printf("Enter the length of the string:");
    scanf("%d",&n);
    char s[n];
    printf("Enter the string:");
    scanf("%s",s);
    printf("Enter the shift value:");
    scanf("%d",&sh);
    shift(s,sh);
    return 0;
}
// ./a.exe
// Enter the length of the string:3
// Enter the string:xyz
// Enter the shift value:3
// the new string formed is=abc