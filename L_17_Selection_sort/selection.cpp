#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cout<<"Enert the element os an array:";
        cin>>arr[i];
    }

    for(int i = 0;i<n-1;i++){
        int index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[index]){
                index = j;
            }
            
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}