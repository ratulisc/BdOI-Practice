#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> numbers;


    for(int i=0;i<10;i++)
    {
        numbers.push_back(i+1);
    }

    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<endl;
    }
}
