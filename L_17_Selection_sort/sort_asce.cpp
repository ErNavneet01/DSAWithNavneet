#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}