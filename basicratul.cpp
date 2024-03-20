// print all number from 1 to 100
// print all even number from 1 to 100
//print all odd number from 1 to 100
// write a simple code using if else if and else if and else

#include<bits/stdc++.h>
using namespace std;
int main(){
    // for(int i=1;i<101;i++){
    //     cout<<i<<endl;
    // }
    // for (int i=0;i<101;i+=2){
    //     cout<<i<<endl;
    // }
    // for(int i=1;i<101;i+=2){
    //     cout<<i<<endl;
    // }
    int n;
    cin>>n;
    if (n>=0 && n<=25){
        cout<<"very small number"<<endl;
    }
    else if(n>25 && n<=50){
        cout<<"small number"<<endl;
    }
    else if (n>50 && n<=75){
        cout<<"Big Number"<<endl;
    }
    else{
        cout<<"Very Big Number"<<endl;
    }

}




