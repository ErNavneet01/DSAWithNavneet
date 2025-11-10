// 
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,4,6,8,10};
    int *ptr = arr;
    // for(int i=0;i<5;i++){
    // cout<<*ptr<<endl;
    // ptr++;
    // }
    // int *ptr1 = &arr[4];
    // cout<<"arr:"<<endl;
    // for(int i=4;i>=0;i--){
    // cout<<*ptr1<<endl;
    // ptr1--;
    // }
    // for(int i=0;i<5;i++){
    // cout<<*(ptr+i)<<endl;
    // }

    // addition
    ptr = ptr+3;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    //substraction 
    ptr = ptr-2;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    

    return 0;
}