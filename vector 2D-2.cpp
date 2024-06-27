#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v[100];
    int row=2,col=3, a;
    cout<<"row : "<<row<<" col : "<<col<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>a;
            v[i].push_back(a);
        }
    }

    for(int i=0; i<row; i++)
    {
        cout<<i<<"  : ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    /*clear 2D vector
    for(int i=0; i<row; i++)
    {
        v[i].clear();
    }*/
    return 0;
}
