#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr;  //storing null value
    ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int b=80;
    ptr = &b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}