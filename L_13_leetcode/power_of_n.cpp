// 2^0=1,2^1=2

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;

    if(num<0){
        cout<<"not muktiple of 2";
    }
    else{
        while(num!=1){
            if(num%2==1){
                cout<<"Not mul of 2";
                num = num/2;
            }
            
        cout<<"Number is mul of 2:"<<num;
        }
        
        
    }
    return 0;
}