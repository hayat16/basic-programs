#include<stdio.h>

int  insert(int a[],int num_of_element,int pos,int item)
{
    int i;
    int j=num_of_element;
    for(i=j;i>=pos-1;i--)
    {
       a[i+1]=a[i];

    }

    a[pos-1]=item;
    num_of_element=num_of_element+1;
    for(i=0;i<num_of_element;i++)
    {
        printf("%d\t",a[i]);
    }

}
int main()
{
    int a[100],pos,item,num_of_element,i;
    printf("Enter the nuber of element : ");
    scanf("%d",&num_of_element);
    pos=3;
    item=150;
    for(i=0;i<num_of_element;i++)
    {
        scanf("%d",&a[i]);

    }

    insert(a,num_of_element,pos,item);

}
