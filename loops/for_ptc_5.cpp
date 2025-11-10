#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    // for(int i=0;i<=n;i++){
    //     sum=sum+i;
    // }
    // cout<<sum;
    
// sum of square of n natural numbers
    for(int i=0;i<=n;i++){
        sum=sum+i*i;
    }
    cout<<"The sum of square of n natural number is:"<<sum;

}