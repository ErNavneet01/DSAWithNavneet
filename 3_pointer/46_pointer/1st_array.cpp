// arr[5] = [11,7,8,12,14]
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {11,12,8,7,14};
    int *ptr = arr;
    // print the address 0f 1st element or 0 index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    // print the address 0f 2nd element or 1 index
    cout<<arr+1<<endl;
    cout<<ptr+1<<endl;
    cout<<&arr[1]<<endl;
    // print the address 0f 1st element or 0 index
    cout<<"value at 0index"<<endl;
    cout<<*(arr+0)<<endl;
    cout<<arr[0]<<endl;
    cout<<*ptr<<endl;
    cout<<*arr<<endl;
    // print the address 0f 2nd element or 1 index
    cout<<"value at 1 index"<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[1]<<endl;
    cout<<*ptr+1<<endl;
    cout<<*arr+1<<endl;
 
    // printing address
    for(int i=0;i<5;i++){
        cout<<(arr+i)<<endl;
    }
    // printing all value
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
    }
    
    // cout<<arr+2<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<arr+3;
    return 0;
}
