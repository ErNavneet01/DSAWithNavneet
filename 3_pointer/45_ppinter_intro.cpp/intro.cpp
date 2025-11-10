#include<iostream>
using namespace std;
int main(){
    int a = 10;
    // print the address of a
    cout<<&a<<endl;

    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    float m = 2.6;
    float *ptr1 = &m;
    // ptr1 is a pointer who is pointing to a float type data type.
    // decimal to binary and binary to hexadecimal
    cout<<ptr1<<endl;
    cout<<sizeof(ptr1);

    return 0;
}