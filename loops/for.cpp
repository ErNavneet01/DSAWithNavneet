#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     if(i%2==0){
    //         cout<<"Number is even:"<<i<<endl;
    //     }
    //     else{
    //         cout<<"Not even"<<i<<endl;
    //     }
    // }
    for(int i=0;i<=n;i=i+2){
        cout<<"Even:"<<i<<endl;
    }
}