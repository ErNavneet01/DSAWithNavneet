// Peak index of mountain element {2,4,6,8,10,8,5}

#include<iostream>
using namespace std;

int peak(int arr[], int n){
    int start = 0, end = n-1, mid;
    while(start<=end){
        mid = start+ end - start/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
        else if (arr[mid]>arr[mid-1]){
        start = mid+1;}
        else{
        end = mid-1;}
    }
}

int main(){
    int arr[100], n;
    cout<<"Enter the size of an array:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<peak(arr,n);

    return 0;
}