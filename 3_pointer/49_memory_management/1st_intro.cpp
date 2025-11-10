// 
#include<iostream>
using namespace std;

int main(){
    // Memory allocation in heap
    int *ptr = new int;
    cout<<ptr<<endl;
    *ptr = 5;
    cout<<*ptr<<endl;
    
    float *ptr1 = new float;
    cout<<ptr1<<endl;
    *ptr1=1.5;
    cout<<*ptr1<<endl;

    // for array
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int *p = new int[n];
    // take input of an array
    for(int i=0;i<n;i++){
        p[i] = i+1;
    }
    // print value
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }

    // use of delete key word
    delete ptr;
    delete ptr1;
    delete[] p;   //delete key word is used delete allocated space in heap memory


    return 0;
}