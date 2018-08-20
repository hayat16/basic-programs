#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    mp["ABC"]=123;
    mp["cde"]=2;
    mp["ijk"]=39;
    mp["ijk"]=40;
    string s;
    //  using pointer
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //using pair
    int x,y,z;
    map<pair<int,int>,int>p;
    for(int i=0; i<3; i++)
    {
        cin>>x>>y>>z;
        p.insert(make_pair(make_pair(x,y),z));
        cout<<p[make_pair(x,y)]<<endl;
    }
    // normal map
    while(cin>>s)
    {
        if(mp.find(s)!=mp.end())
        {
            cout<<mp[s]<<endl;
        }
        else
        {
            cout<<"no match"<<endl;
        }
    }
    return 0;
}
