//square matrix n*n
#include<stdio.h>
int main()
{
     int a[100][100],sum=0,i,n,j;

    scanf("%d",&n);
    printf("Enter matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            scanf("%d",&a[i][j]);
        }

    }

     for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(j>i)
           sum=sum+a[i][j];
        }

    }

       printf("upper triangular matrix :%d\n",sum);

 return 0;

    }






