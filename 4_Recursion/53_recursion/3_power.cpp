// 2^5
#include<iostream>
using namespace std;

int pow(int num,int n){
    if(n==0){
        return 1;
    }
    // if(num==1){
    //     return num;
    // }
    return num*pow(num,n-1);
    
}
int main(){
    int num,n;
    cout<<"Enter num:";
    cin>>num;
    cout<<"enter n:";
    cin>>n;
    cout<<pow(num,n);
    
    // int num=2;
    // int result=1;
    // for(int i=1;i<=5;i++){
    //     result *=num;
    // }
    // cout<<result;
    return 0;
}
