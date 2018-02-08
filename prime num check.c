#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,i;
    while(scanf("%d",&n)==1)
    {
        p=n;
        int flag=0;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i ==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("not prime");
        }
        else
        {
            printf("prime");
        }
    }
}
