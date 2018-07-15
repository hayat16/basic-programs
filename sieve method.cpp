#include<iostream>
#include<math.h>
using namespace std;
bool mark[10000007];
int prime[300000];
int nprime;
void sieve(int n)
{
    int i,j;
    int limit=sqrt(n * 1.)+2;
    mark[1]=1;
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    prime[nprime++]=2;
    for(i=3; i<=n; i++)
    {
        if(mark[i]==0)
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i;j<=n;j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }

}
int main()
{
    int n,i;
    cin>>n;
    sieve(n);
    cout<<"prime numbers :" <<"\n";
    for(i=0;i<nprime;i++)
    {
       cout<< prime[i]<<"\n";
    }

    return 0;
}
