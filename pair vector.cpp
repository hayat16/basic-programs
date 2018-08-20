#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // normal vector
    vector<int>v;
    v.push_back(500);
    v.push_back(100);
    cout<<v[0]<<" "<<v[1]<<endl;
    //pair vector
    vector< pair <int,int> > p;
    int x,y;
    cout<<"pair vector"<<endl;
    for(int i=0; i<3; i++)
    {
        cin>>x>>y;
        p.push_back(make_pair(x,y));
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    sort(p.begin(),p.end());
    cout<<"After sorting"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}
