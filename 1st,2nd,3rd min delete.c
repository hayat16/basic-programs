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
int find_min(int a[],int n)
{
    int min=999,i;
    for( i=0; i<n; i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
        }
    }

    return min;
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
    int first_min=find_min(a,n);
    int first_pos=search(a,n,first_min);
    delete(a,n,first_pos);
    printf("\nAfter first min delete:\n");

    for(int i=0; i<n-1; i++)
    {
        printf("%d\t",a[i]);
    }


    int second_min=find_min(a,n-1);
    int second_pos=search(a,n,second_min);
    delete(a,n,second_pos);

    printf("\nAfter second min delete:\n");
    for(int i=0; i<n-2; i++)
    {
        printf("%d\t",a[i]);
    }

    int third_min=find_min(a,n-2);
    int third_pos=search(a,n,third_min);
    delete(a,n,third_pos);

    printf("\nAfter third min delete:\n");
    for(int i=0; i<n-3; i++)
    {
        printf("%d\t",a[i]);
    }

}


