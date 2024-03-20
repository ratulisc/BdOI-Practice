# include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>elements;
    int n;
    cin>>n;
    //n => number of digits.

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        elements.push_back(x);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=elements[i];
    }
    cout<<sum<<endl;
}