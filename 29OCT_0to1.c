//Qn-input a no and convert all 1's to 0
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the no of elements=");
    scanf("%d",&n);
    int *ptr=(int*)calloc(n,sizeof(int));
    printf("enter the no:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("output:");
    for(int i=0;i<n;i++)
    {
        if(ptr[i]==0)
        {
            printf("%d",1);
        }
        else
        {
        printf("%d",ptr[i]);
        }
    }
    printf("\n");
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures>./a.exe
// enter the numbers=4    
// enter the no:2 3 0 0
// output:2311