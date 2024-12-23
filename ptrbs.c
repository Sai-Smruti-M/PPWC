#include<stdio.h>
void bubble(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)>*(a+j))
            {
                int temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}
int bs(int *a,int l,int h,int x)
{
    while(l<h)
    {
        int m=l+(h-l)/2;
        if(*(a+m)==x)
            return x;
        else if(*(a+m)>x)
            h=m-1;
        else
            l=m+1;
        

    }
    return -1;
}
int main()
{
    int a[]={5,2,1,4,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    int b;
    printf("enter 1.bubble sort \n2.binary search \n3.exit\n");
    scanf("%d",&b);
    int c;
    int low=0;

    switch(b)
    {
        case 1:
                bubble(a,n);
                for(int i=0;i<n;i++)
                {
                    printf("%d",a[i]);
                }
                break;
        case 2:
        		bubble(a,n);
                c=bs(a,low,n,3);
                printf("found position is= %d",c);
                break;
        case 3:
                break;


    }

}
