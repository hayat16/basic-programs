#include<stdio.h>
int search(int a[],int n,int item)
{

    a[n+1]=item;
    int loc=0;
    while(a[loc]!=item)
    {
        loc+=1;

    }

    if(loc==n+1)
    {
        loc=0;
    }
    printf("%d",loc+1);
}

int main()
{
    int a[]={10 ,5,2,15,200,50,90,500};
    int n=sizeof(a)/sizeof(a[0]);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("%d\n",max);
    int item=max;
    search(a,n,item);

}
