#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<10;i++){
    //     cout<<"arr "<<i<<" "<<arr[i]<<endl;
    // }

    int arr[5] = {1 ,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);




    return 0;
}