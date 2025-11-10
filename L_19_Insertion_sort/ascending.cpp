#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Entter the size of an array:";
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j])
            swap(arr[j],arr[j-1]);
        }
    }
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}