// 5! = 5x4x9x2x1
// factoral of 0 is 1
#include<iostream>
using namespace std;

int fact(int num){
    if(num==1 || num==0){
        return 1;
    }
    return num*fact(num-1);
}

int main(){
    int num;
    cout<<"Eneter num:";
    cin>>num;
    if(num<0){
        cout<<"Factorial is not possible";
    }
    else{
        cout<<fact(num);
    }
    
    // fact(num);
    return 0;
}