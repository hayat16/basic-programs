//square matrix n*n
#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],res[100][100];
    int i,j,n;
    scanf("%d",&n);
    printf("first matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            scanf("%d",&a[i][j]);
        }

    }
    printf("2nd matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            scanf("%d",&b[i][j]);
        }

    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            res[i][j]=0;
            for(int k=0; k<n; k++)
            {
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf(" matrix sum\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");

    }

}
