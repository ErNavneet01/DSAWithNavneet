// suffix sum  6 4 5 -3 2 8

#include<iostream>
#include<vector>
using namespace std;

void suffix_sum(int arr[], int n){

    vector<int>suf(n);
    suf[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        // suf[i+1]
        suf[i] = suf[i+1]+arr[i];
    }
    for(int i=n-1;i>=0;i--){
        cout<<suf[i]<<" ";
    }

}
int main(){
    int arr[100], n;
    cout<<"Enter the size:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    suffix_sum(arr,n);

    return 0;
}
