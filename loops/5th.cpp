#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num:";
    cin>>num;
    if(num>0){
        cout<<"Number is positive";
    }
    else if(num==0){
        cout<<"Num is zero";
    }
    else{
        cout<<"Num is negative";
    }
}