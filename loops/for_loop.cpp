#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    // // Print n natural numbers
    // for(int i=1;i<=n;i=i+1){
    //     cout<<i<<endl;

    // }

    // Print sr of n natural numbers
    for(int i=0;i<=n;i=i+2){
        cout<<i*i<<endl;
    }
}