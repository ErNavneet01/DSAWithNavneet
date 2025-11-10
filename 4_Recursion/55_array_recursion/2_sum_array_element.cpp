// 3 4 5 8 2
#include<iostream>
using namespace std;
// 1st 
int sum(int arr[], int n){
    if(n==0){
        return arr[n];
    }
    return arr[n]+sum(arr,n-1);

}

// using index and n
// int sum(int arr[],int index, int n){
//     if(index==n){     // index=n means 5=5 return 0;
//         return 0;
//     }
//     return arr[index]+sum(arr,index+1,n);
// }

int main(){
    int arr[20],n, index=0;
    cout<<"Enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n-1);
    // cout<<sum(arr,index,n);
    return 0;
}
