#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    deque<int>d(8,100);//8 ta ghor protekktar value 100
    int i,j;
    for(i=0;i<d.size();i++)
    {
        cout<<d[i]<<" ";
    }
     deque<int>d1;// double ended queue
     
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(11);
    d1.push_back(100);
    d1.push_back(200);
    d1.push_back(20);

    d1.push_front(500);
    d1.push_front(600);

    d1.pop_back();
    d1.pop_front();

    cout<<endl;

    for(i=0;i<d1.size();i++)
    {
        cout<<d1[i]<<" ";
    }

    cout<<endl;
    
    //swap
    deque<int> boo(5,200);
    deque<int>foo(3,200) ;

    boo.swap(foo);

    for(i=0;i<boo.size();i++)
    {
        cout<<boo[i]<<" ";
    }
    cout<<endl;

    //resize

    deque<int>dd;

    dd.resize(5);
    dd.resize(8,100);
    dd.resize(12);
    for(i=0;i<dd.size();i++)
    {
        cout<<dd[i]<<" ";
    }


    return 0;
}
