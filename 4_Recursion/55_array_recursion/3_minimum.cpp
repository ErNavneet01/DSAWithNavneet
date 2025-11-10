// 7 2 4 1 6
#include<iostream>
using namespace std;

// int minelement(int arr[], int index, int n){
//     if(index==n-1){
//         return arr[index];
//     }
//     return min(arr[index],minelement(arr,index+1,n));
// }
// 2nd method
int minelement(int arr[],int n){
    if(n==0){
        return arr[n];
    }
    return min(arr[n],minelement(arr,n-1));
}
int main(){
    int arr[100],n,index=0;
    cin>>n;

    // int num=arr[0];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //    num= min(num,arr[i]);
    // }
    // cout<<num;
    // cout<<"minimum element is:"<<minelement(arr,index,n)<<endl;
    cout<<"minimum element is:"<<minelement(arr,n)<<endl;




    return 0;
}
