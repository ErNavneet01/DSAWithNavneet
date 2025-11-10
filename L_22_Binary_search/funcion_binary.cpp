
#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int start = 0, end = n-1, mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key)
        return mid;

        else if(arr[mid]<key)
        start = mid+1;
        else
        end = mid -1;
    }

    return -1;

}

int main(){
    int n,key;
    cout<<"Enter the size of an array:";
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter key:";
    cin>>key;

    cout<<binarysearch(a,n,key);

    return 0;
}