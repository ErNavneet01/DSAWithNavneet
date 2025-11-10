// 5 7 7 8 8 10   target is 8

#include<iostream>
using namespace std;

pair<int,int> first_last(int arr[], int n, int target){
    int start =0, end = n-1, mid;
    int  first =-1,last = -1;
// First
    while(start<=end){
        mid = start + end - start/2;
        if(arr[mid]==target){
            first = mid;
            end = mid-1;

        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }

    // last
    start =0, end = n-1;      //strt and end value is changed after 1st so fix value first
    while(start<=end){
        mid = start+end-start/2;
        if(arr[mid]==target){
            last = mid;
            start = mid+1;
        }
        else if(arr[mid]<target){
            start = mid +1;
        }
        else{
            end = mid -1;
        }

    }
    
    return  {first,last};

}

int main(){

    int arr[100],n,pos;
    cout<<"Enter the size of an array:";
    cin>>n;
    cout<<"Enter target value:";
    cin>>pos;
    cout<<"Enter the element of an array:";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pair<int, int> result = first_last(arr, n, pos);
    cout << "First position: " << result.first << ", Last position: " << result.second << endl;
    return 0;
}