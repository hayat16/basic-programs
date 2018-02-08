
#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,n,count=0;

    printf("enter the number : ");
    scanf("%lld",&n);
    long long int s=n;
    long long int p=n;
    while(n>0)
    {
        a=n%10;
        count++;
        n=n/10;


    }
    printf("Number of element %lld\n",count);
    long long int result=0,sum=0;
    while(s>0)
    {
         long long k=1;
        b=s%10;
        for(int i=0; i<count; i++)
        {

            k=k*b;
        }
        s=s/10;
        sum=sum+k;
    }
    printf("\nSum of the digit : %lld\n",sum);
    if(sum==p)
    {
        printf("the number is Armstrong");
    }
    else
    {
        printf("The number is not  Armstrong");
    }
    return 0;


}
