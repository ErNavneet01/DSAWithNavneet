// 3 3 2 3 1 3 2 2 1 3 3         n=11  number repeat n/2 times
#include<iostream>
using namespace std;

void majority(int arr[], int n){
    // decrease by 1
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    // store occurrence of a num
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }

    for(int i=0;i<n;i++){
        int ans = arr[i]/n;
        if(ans>n/2){
            cout<<i+1;
            return;
        }
    }

}

int main(){
    int arr[100],n;
    cout<<"Enter n:";
    cin>>n;
    

    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    majority(arr,n);

    return 0;
}