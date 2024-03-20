//print 1 to 100 using vector,f first push 100 number then print
//print all the even number from 1 to 100 using vector
//print all the odd number from 1 to 100 using vector
//print all the square number from 1 to 100 using vector

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>numbers;
    // for(int i=0;i<100;i++){
    //     numbers.push_back(i+1);                        
    // }
    // for(int i=0;i<numbers.size();i++){
    //     cout<<numbers[i]<<endl;
    // }

    // for(int i=0;i<101;i++){
    //     numbers.push_back(i+2);
    // }

    // for(int i=0;i<numbers.size();i+=2){
    //     cout<<numbers[i]<<endl;
    // }

    // for(int i=0;i<101;i++){
    //     numbers.push_back(i);
    // }
    // for(int i=1;i<numbers.size();i+=2){
    //     cout<<numbers[i]<<endl;
    // }

    for(int i=0;i*i<101;i++){
        numbers.push_back(i*i);
    }
    for(int i=1;i<numbers.size();i++){
        cout<<numbers[i]<<endl;
    }
} 
