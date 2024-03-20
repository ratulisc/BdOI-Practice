#include<bits/stdc++.h>
using namespace std;
int main()

{

    // vector<int>numbers;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     numbers.push_back(x);
    // }
    // int count = 0;
    // for(int i=0;i<n;i++)
    // {
    //     count += numbers[i];
    // }
    // cout<<count<<endl;

    // vector<int>numbers;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     numbers.push_back(x);
    // }
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     count += numbers[i]*numbers[i];
    // }
    // cout<<count<<endl;

    // vector<int>numbers;
    // int n;
    // cin>>n;
    // for (int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     numbers.push_back(x);
    // }
    // int count=0;
    // for (int i=0;i<n;i++)
    // {
    //     if (numbers[i] %2 != 0){
    //         count += 1;
    //     }
            
    // }
    // cout<<count<<endl;

    string word;
    cin >> word;
    int count = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i] == 'u') {
            count += 1;
        }
    }
    cout << count << endl;
}
