#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int d=0;
    for(int i=0;i<s.size();i++)
    {
        d=d*2+s[i]-48;
    }
    cout<<"decimal number "<<d<<endl;

    return 0;
}
