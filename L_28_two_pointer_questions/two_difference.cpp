// 5 10 3 2 50 80   first sort this array 2 3 5 10 50 80
#include<iostream>
using namespace std;

void two_differ(int arr[], int n, int key){
    int start=0, end =1;
    while(start<n && end<n){
        int diff = arr[end]-arr[start];
        if(diff==key){
            cout<<start<<" "<<end;
            return;
        }
        else{
            if(diff>key){
                start++;
            }
            else{
                end++;
            }
        }
    }
    cout<<"Not found";

}
int main(){
    int arr[100], n, key;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Key:";
    cin>>key;

    two_differ(arr,n,key);

    return 0;
}