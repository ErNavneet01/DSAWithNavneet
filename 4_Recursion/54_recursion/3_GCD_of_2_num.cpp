// num1 =18 && num2 =48
// 1,2,3,6   Eucliden algorithm   (a,b) is given then 
// (b,a%b) until a%b!=0 when a%b==0 then a is our answer
#include<iostream>
using namespace std;

void gcd(int a, int b){
    if(b==0){
        cout<<a;
        return;
    }
    gcd(b,a%b);
}
int main(){
    int a, b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    gcd(a,b);
    return 0;
}
