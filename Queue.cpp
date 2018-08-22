#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x;
    queue<int>q;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    q.push(100);
    q.push(500);
    cout<<"last element of queue "<<q.back()<<endl;
    q.back()=q.back()-q.front();
    cout<<"last element of queue after subtraction by q.front "<<q.back()<<endl;

    return 0;
}
