#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(100);
    v.push_back(200);
    v.push_back(600);
    v.push_back(60);
    v.push_back(50);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    vector<int>::iterator x; //variable declare for address define
    x=max_element(v.begin(),v.end());//max fun
    cout<<"max element  :"<<*x<<endl;
    int a=5;
    vector<int>::iterator y;//variable declare for address define
    y=find(v.begin(),v.end(),a);//Here  y got the address of a
    v.erase(y);//pop a from the vector v by the address y
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int b=100;
    vector<int>::iterator z;//variable declare for address define
    z=find(v.begin(),v.end(),b);
    v.insert(z,250);//Here  z got the position  of b but not address
    cout<<"  After insert value : "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
    int h=5;//means 5th position
    vector<int>::iterator m;
    m=find(v.begin(),v.end(),v.at(h));//m contain address of 5th position
    v.insert(m,900);// insert 900  in 5th position
    cout<<" After insert 900 in 5th position :  " <<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}

