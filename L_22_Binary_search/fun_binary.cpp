// 30,24,20,16,4
#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){
    int strt=0, end = n-1,mid;
    while(strt<=end){
        mid = strt + (end-strt)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        strt = mid+1;
        
        else
        end = mid-1;
       
    }
    return -1;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enetr the size of an array:";
    cin>>n;
    int pos;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to find:";
    cin>>pos;

    cout<<binarysearch(arr,n,pos);

    return 0;
}