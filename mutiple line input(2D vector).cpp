#include<bits/stdc++.h>
using namespace std;
vector<string>name[100];
int main()
{
    int i,j,t;
    string line;
    cout<<"How many question U want to enter ? "<<endl;
    cin>>t;
    cout<<"Enter question and its option in different line .After that u have to write ok word "<<endl;
    for (i = 0; i < t; i++)
    {
        cout<<"Question no : "<<i+1<<endl;
        while(std::getline(std::cin, line))
        {
            name[i].push_back(line);
            if(line == "ok")
            {
                break;
            }
        }
    }
    cout<<endl<<" Question in reverse order "<<endl;
    for (i = t-1; i>=0; i--)
    {
        for (j = 0; j < name[i].size()-1; j++)
        {
            cout<<name[i][j]<<endl;
        }
    }
}
/*
input format :
How many question U want to enter ?
2
Enter question and its 4 option in different line .After that u have to write next word
Question no : 1
1.what is ur country name?
A. Bangladesh
B.china
C.India
D. London
ok
Question no : 2
2.what is ur age?
A. 23
B.20
C.18
D. 30
ok
*/
