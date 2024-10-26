//Qn-wap to print wheather a no is prime or not
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number to be tested:");
    scanf("%d",&n);
    int count=0;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("its not a prime no\n");
            break;
        }
        else
        {
            count++;

        }

    }
    printf("count=%d and n/2=%d\n",count,n/2);
    if(count==n/2-1)
    {
        printf("its a prime no");

    }
    
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe
// enter a number to be tested:5
// count=1 and n/2=2
// its a prime no