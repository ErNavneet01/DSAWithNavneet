#include<iostream>
using namespace std;
bool prime(int num){
    if(num<2){
        return 0;
    }
    else{
        for(int i=2;i<num;i++){
            if(num%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<prime(b);

    return 0;
}