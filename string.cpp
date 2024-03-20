#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name="mynameisratul";
    //string is a vector
    int count=0;

    for(int i=0;i<name.size();i++)
    {
        if(name[i]=='a')
        {
            count++;
        }
    }
    cout<<count<<endl;
}