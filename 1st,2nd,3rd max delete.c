#include<stdio.h>
int delete(int a[],int n,int pos)
{

    int item=a[pos];
    for(int i=pos; i<=n; i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;

}
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

    return loc;
}
find_max(int a[],int n)
{
    int max=0,i;
    for( i=0; i<n; i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }

    return max;
}

int main()
{
    int a[]= {10,5,2,15,1200,50,90,6},i;

    int n=sizeof(a)/sizeof(a[0]);
     printf("\nArray\n");

     for(int i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    int first_max=find_max(a,n);
    int first_pos=search(a,n,first_max);
    delete(a,n,first_pos);
    printf("\nAfter first max delete:\n");

    for(int i=0; i<n-1; i++)
    {
        printf("%d\t",a[i]);
    }


    int second_max=find_max(a,n-1);
    int second_pos=search(a,n,second_max);
    delete(a,n,second_pos);

    printf("\nAfter second max delete:\n");
    for(int i=0; i<n-2; i++)
    {
        printf("%d\t",a[i]);
    }

    int third_max=find_max(a,n-2);
    int third_pos=search(a,n,third_max);
    delete(a,n,third_pos);

    printf("\nAfter third max delete:\n");
    for(int i=0; i<n-3; i++)
    {
        printf("%d\t",a[i]);
    }

}

