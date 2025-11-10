// n=4
// 1x1x1 + 2x2x2 + 3x3x3 + 4x4x4 
// 1+8+27+64 = 100
#include<iostream>
using namespace std;

int cube(int num){
    if(num==1){
        return 1;
    }
    return num*num*num + cube(num-1);
}

int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    cout<<"Cube of n natural number is:";
    cout<<cube(num);
    return 0;
}