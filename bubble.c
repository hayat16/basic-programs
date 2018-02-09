#include<stdio.h>
int bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {

            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }


        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int a[]= {10,5,500,1,30,0,70,80,50};
    int n=sizeof(a)/sizeof(a[0]);
    printf("%d\n",n);
    bubble(a,n);
}
