// n=4
// 1^2 + 2^2 + 3^2 + 4^2 
// 1+4+9+16=30

#include<iostream>
using namespace std;

int sqr(int n){
    if(n==0){
        return 0;
    }
    return n*n + sqr(n-1);
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int result =0;
    cout<<sqr(n);


    // Using itterative approach

    // for(int i=1;i<n;i++){
    //     result = result+i*i;
    // }
    // cout<<result;


    return 0;
}
