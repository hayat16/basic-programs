//square matrix n*n
#include<stdio.h>
int main()
{
    int a[100][100],b[100],sum,temp,max=0,k;
    int i,j,n;
    scanf("%d",&n);
    printf("enter  matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            scanf("%d",&a[i][j]);
        }

    }
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum=sum+a[i][j];
        }
        b[i]=sum;

    }
    printf(" matrix sum\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",b[i]);
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        if(b[i]>=max)
        {
            max=b[i];
            k=i;
        }
    }
    printf("\nmaximum  sum of row is %d & index of that row %d\n",max,k+1);
return 0;
}

