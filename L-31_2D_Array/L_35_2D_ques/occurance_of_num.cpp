// 3 2 5 3 1 2 3 7  (N = 8)

#include<iostream>
using namespace std;

void occurrence(int arr[],int count[],int n){
    
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    // 2 1 4 2 0 1 2 6 

    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    // 0 1 2 3 4 5 6 7
    // 2 1 4 2 0 1 2 6
    // 10 17 28 2 8 10 6
    // int ans;
    for(int i=0;i<n;i++){
        cout<<arr[i]/n<<" ";
    }



}
int main(){
    int arr[8], count[8],n;
    cout<<"Enter n:";
    cin>>n;
    

    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    occurrence(arr,count,n);

    return 0;
}
