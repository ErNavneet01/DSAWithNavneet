#include<iostream>
using namespace std;
// a[] is not array its a pointer
void fun(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int srr[100];
    for(int i=0;i<n;i++){
        cin>>srr[i];
    }
// srr[] is array
    fun(srr,n);
    return 0;
}