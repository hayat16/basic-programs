#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<string> >result;
    vector<string> row1;
    vector<string> row2;
    string s;
    int n=2;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        row1.push_back(s);
    }
    for(int i=0; i<n; i++)
    {
        cin>>s;
        row2.push_back(s);
    }

    result.push_back(row1);
    result.push_back(row2);

    // Accessing and printing elements
    cout << "Element at result[0][1]: " << result[0][1] << endl; 
  
    // Adding a new row
    vector<string> newRow;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        newRow.push_back(s);
    }
    result.push_back(newRow);

    cout << "Contents of result:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
