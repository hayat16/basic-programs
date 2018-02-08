#include<stdio.h>
#include<math.h>
int main()
{
   long long int j,p,i;
for(i=1;i<=100;i++)
    {
        p=i;
        int flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j ==0)
            {
                flag=1;
                break;
            }
        }
        int rev=0;
        if(flag==0)
        {
            while(p>0)
            {
                rev=rev+p%10;
                p=p/10;
            }

            printf("%lld digit sum is %lld\n",i,rev);
        }
        else
        {
           continue;
        }
    }
}



