// 4 3 2 1 2 7 6

#include<iostream>
using namespace std;

void miss_and_rep(int arr[], int n){
    // decrease an array by 1
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    // find occurence of a number
    for(int i=0;i<n;i++){
        arr[arr[i]%n] +=n;
    }
    // find repeat and miss
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            cout<<i+1<<" ";
        }
        else if(arr[i]/n==0){
            cout<<i+1;
        }
    }
}
int main(){
    int arr[8],n;
    cout<<"Enter n:";
    cin>>n;
    

    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    miss_and_rep(arr,n);

    return 0;
}
