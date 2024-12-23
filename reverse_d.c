#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the length of the string:");
	scanf("%d",&n);
	getchar();
    char *s;
    s=(char*)calloc((n+1),sizeof(char));
    printf("eneter the string:");
    scanf("%[^\n]s",s);
    printf("reversed string:");
    for(int i=n-1;i>=0;i--)
    {
    	printf("%c",s[i]);
    }
    printf("\n");
    
    free(s);
   }
    
