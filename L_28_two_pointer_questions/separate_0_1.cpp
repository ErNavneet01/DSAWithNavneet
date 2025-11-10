// 0 1 0 1 0 1
#include<iostream>
using namespace std;

void seperate_zero(int arr[], int n){
    int start =0;
    int end = n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                end--;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
}

int main(){
    int arr[100],n,start,end;
    cout<<"enter the size of an array:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    seperate_zero(arr,n);

    return 0;
}