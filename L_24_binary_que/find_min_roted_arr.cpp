// find min element in rotated array  {4 ,6,8,10,1,2}


#include<iostream>
using namespace std;

int peak(int arr[], int n){
    int start = 0, end = n-1, mid, ans = arr[0];
    while(start<=end){
        mid = start+ end - start/2;
        // left side sorted
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        // right side sorted
        else{
            ans = arr[mid];
            end = mid-1;
        }
    }
    return ans;
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