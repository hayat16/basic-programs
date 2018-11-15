#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    long long int i,j,sum=0,flag,k,base=1;
    vector<int>v;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        flag=0;
        for(j='A'; j<='F'; j++)
        {
            if(s[i]==j)
            {
                k=s[i]-55;
                v.push_back(k);
                flag=1;
            }
        }
        if(flag==0)
        {
            v.push_back(s[i]-48);
        }
    }
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }

    for(i=v.size()-1;i>=0;i--)
    {
        sum=sum+v[i]*base;
        base =base*16;
    }
    cout<<endl<<sum<<endl;

    return 0;
}
