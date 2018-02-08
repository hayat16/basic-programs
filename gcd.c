#include<stdio.h>
#include<conio.h>
int gcd(long long int a,long long int b)
{
    int t;
    while(b!=0)
   {

   t=b;
    b=a%b;
    a=t;}
    return a;
}
int main()
{
   long  int n,i,j;
    while(scanf("%lld",&n)==1)
    {
        long long sum=0;
       for(i=1;i<n;i++)
       {
           for(j=i+1;j<=n;j++)
           {
               sum=sum+gcd(i,j);
           }

       }
  printf("%lld",sum);
    }


}
