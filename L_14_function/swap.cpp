#include<iostream>
using namespace std;

// Pass by reference

void swap(int &a, int &b){   //pass by reference
    int c;
    c=a;
    a=b;
    b=c;
}
// Function overloading
// A function can have same name but must be different parameters or arguments

int main(){
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter teh value of b:";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}