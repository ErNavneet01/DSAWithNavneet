#include<iostream>
using namespace std;
int main(){
    int n,pow;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"Enter the power:";
    cin>>pow;
    int num = n;
    for(int i=1;i<pow;i++){
        num=num*n;
    }
    cout<<"The power of number n is:"<<num;

}