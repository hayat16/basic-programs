#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,p,n;
    while(scanf("%d",&n)==1)
    {
        p=n;
        int flag1=0,flag2=0;
        for(i=2; i<=sqrt(n); i++)
        {
            if(n%i ==0)
            {
                flag1=1;
                break;
            }
        }

        int res=0;
        while(p>0)
        {
            res=res*10+p%10;
            p=p/10;
        }
        for(i=2; i<=sqrt(res); i++)
        {
            if(res%i ==0)
            {
                flag1=1;
                break;
            }
        }
        if(n!=res && flag1==0 && flag2==0)
        {
            printf("emirp");
        }
        else if(flag1==0)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        };

    }
}
