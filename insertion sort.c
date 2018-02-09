#include<stdio.h>
int insert(int a[],int n)
{
    int i,j,key;
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;

        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }

}
int main()
{
    int a[]={0,15,23,8,6,9,7,100,500,50,5};
    int n=sizeof(a)/sizeof(a[0]);

    insert(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
