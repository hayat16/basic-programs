#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    set<int>:: iterator it;
    int n=5,x;
    cout<<"enter 5 elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        st.insert(x);
    }
    for ( it = st.begin(); it != st.end(); it++)
    {
        cout<<*it<<"  ";
    }
    cout<<endl;

    // Accessing specific elements
    it = st.find(2);
    if (it != st.end())
    {
        cout << "Element found: " << *it <<endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    //another way
    if (st.find(2) != st.end())
    {
        cout << "Element found: " << *it <<endl;
    }
    else
    {
        cout << "Element not found." <<endl;
    }
}
