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
        if(flag==1)
        {
            continue;
        }
        else
        {
            printf("%lld prime\n",i);
        }
    }
}

