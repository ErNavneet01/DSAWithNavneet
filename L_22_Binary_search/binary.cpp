#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;

    int arr[50];
    cout<<"The array element is:";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;
    int key;
    cout<<"Enter the key to find:";
    cin>>key;
    int ret = -1;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            cout<<"Got it:"<<mid;
            ret =1;
            break;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end - mid-1;
        }
        

    }
    if(ret!=-1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }

    return 0;
}