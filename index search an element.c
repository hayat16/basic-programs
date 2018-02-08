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
    int a[]={10 ,5,500,15,200,50,90,0};
    int n=sizeof(a)/sizeof(a[0]);
    int item=5;
    search(a,n,item);

}
