//square matrix n*n
#include<stdio.h>
int main()
{
    int a[100][100],b[100],sum,temp,count,k;
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
    k=0;
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            k++;
        }
    }
    printf("\nnumber of  row without 0 %d\n",k);
    return 0;
}



