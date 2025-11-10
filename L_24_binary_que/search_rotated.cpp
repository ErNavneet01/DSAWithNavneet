// Kth missing positive integer
// 2,4,6,8,10  k=1

#include<iostream> 
using namespace std;

int k_missing(int arr[], int n, int k){
    int start =0, end = n-1,mid, ans=n;
    while(start<=end){
        mid = start+ end -start/2;
        if(arr[mid]-mid-1>=k){
            ans = mid;
            end = mid-1;
        }
        else{
            start= mid+1;
        }

    }
    return ans+k;
}

int main(){
    int arr[100], n, k;
    cout<<"Enter the size of an array:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Find K";
    cin>>k;

    cout<<k_missing(arr,n,k);

    return 0;
}