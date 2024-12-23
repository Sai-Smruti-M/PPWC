#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    getchar();

    char *s;
    s = (char*)malloc((n + 1) * sizeof(char));

    printf("Enter the string: ");
    //fgets(s, n + 1, stdin);
    scanf("%[^\n]s",s);
    for (int i = 0; s[i] != '\0'; i++)
    {
    	if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
    	{
    		s[i]=s[i]-32;
    	}
    }

   

    printf("Converted string = %s", s);
   

    free(s); 
    return 0;
}

