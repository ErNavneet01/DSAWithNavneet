// power of 4

#include<iostream>
using namespace std;

int pow(int num, int n){
    if(n==0){
        return 1;
    }
    return num*pow(num,n-1);
}

int main(){
    int num=4;
    int n;
    cin>>n;
    cout<<pow(num,n);
    return 0;
}
