#include<iostream>
using namespace std;

int main(){
    int arr[5]={11,15,20,22,90};
    int ans = arr[0];
    for(int i = 1;i<5;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;
    }

    cout<<ans;
    return 0;
}