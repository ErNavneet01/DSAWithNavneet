#include<iostream>
using namespace std;
int main(){

    // Post increment
    int a=10;
    int b=a++;
    cout<<b<<endl;
    cout<<a<<endl;
    // pre increment
    int c=10;
    int d=++c;
    cout<<c<<" "<<d<<endl;
// post decrement
    int e=12;
    int f=e--;
    cout<<f<<" "<<e<<endl;
// pre decrement
    int g=13;
    int h=--g;
    cout<<g<<" "<<h;

    return 0;
}
