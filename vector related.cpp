#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;//array declare
    v.push_back(5);//value insert
    v.push_back(11);
    cout<<v[0]<<endl;
    v.push_back(9);
    v.push_back(200);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    int  cnt=count(v.begin(),v.end(),9);//count function
    cout<<" count:"<<cnt<<endl;
    cout<<"After sorting"<<endl;
    sort(v.begin(),v.end());//sort fun
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;

}
