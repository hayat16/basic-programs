#include<bits/stdc++.h>
using namespace std;
int second_max(vector<int>v)
{
    int max_1=-1;
    int max_2=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max_1)
        {
            max_2=max_1;
            max_1=v[i];
        }
        else if(v[i]>max_2 && v[i]!=max_1)
        {
            max_2=v[i];
        }
    }
    cout<<"max_1: "<<max_1<<" max_2: "<<max_2<<endl;
}
int main()
{
    int n,x,target;
    vector<int>v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    second_max(v);
    return 0;
}

