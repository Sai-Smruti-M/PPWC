#include<stdio.h>
int partition(int a[],int low,int high)
{
    int i=low-1;
    int pivot=a[high];
    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    int temp=a[i+1];
    a[i+1]=a[high];
    a[high]=temp;
    return i+1;
}
void qs(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot=partition(a,low,high);
        qs(a,low,pivot-1);
        qs(a,pivot+1,high);
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
    qs(a,0,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    
}
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> gcc 3NOV_quicksort.c
// PS C:\Users\Satya Prasad\Desktop\2241013383\structures> ./a.exe
// Enter the length of your array:4
// Enter the array elements:3 2 1 4
// 1 2 3 4