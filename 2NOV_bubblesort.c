#include<stdio.h>
void bubble(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+i))
            {
            int temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
            }

        }
    }
}
int main()
{
    int n;
    printf("Enter the length of your array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}