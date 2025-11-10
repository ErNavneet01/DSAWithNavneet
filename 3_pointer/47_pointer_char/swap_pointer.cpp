 
#include<iostream>
using namespace std;

void swap(int *a, int *b){         //pass by POINTER
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num=10;
    int temp = 20;
    // here we have to send address 
    swap(&num, &temp);
    cout<<num<<endl;
    cout<<temp<<endl;


    return 0;
}