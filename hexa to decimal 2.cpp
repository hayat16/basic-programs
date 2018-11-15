#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    int i,d;
    cin>>s;
    d=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='A')
        {
            d=d*16+ 10;
        }
       else if(s[i]=='b' || s[i]=='B')
        {
            d=d*16+ 11;
        }
        else if(s[i]=='c' || s[i]=='C')
        {
            d=d*16+ 12;
        }
        else if(s[i]=='d' || s[i]=='D')
        {
            d=d*16+ 13;
        }
        else if(s[i]=='e' || s[i]=='E')
        {
            d=d*16+ 14;
        }
        else if(s[i]=='F' || s[i]=='f')
        {
            d=d*16+ 15;
        }
        else
        {
            d=d*16 + s[i]-48;
        }
    }
    cout<<d;
    return 0;
}
