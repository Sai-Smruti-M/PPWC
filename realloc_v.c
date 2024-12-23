#include<stdio.h>
#include<stdlib.h>
void convert(char *s)
{
	
   for (int i = 0; s[i] != '\0'; i++)
    {
    	if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u')
    	{
    		s[i]=s[i]-32;
    	}
    }
    printf("converted string =%s\n",s);
 }


int main() {

    int n;
    printf("Enter the length of the string: \n");
    scanf("%d", &n);
    getchar();

    char *s;
    s = (char*)malloc((n + 1) * sizeof(char));

    printf("Enter the string: ");
    //fgets(s, n + 1, stdin);
    scanf("%[^\n]s",s);

   convert(s);
int ask;

     int l;
    do
    {
     
    printf("enter 1 to input a string of larger size:\n");
    scanf("%d",&ask);
   
    if(ask==1)
    {
 
    	printf("Enter the new length of the string: \n");
    	scanf("%d", &l);
    	getchar();
    	s=(char*)realloc(s,(l+1)*sizeof(char));
    	printf("Enter the string: \n");
    	fgets(s, l+ 1, stdin);
    	

   	    convert(s);
   	  }
   	  else 
   	  {
   	    break;
   	   }
   	  }
    	
    while(ask==1);
    }
    
