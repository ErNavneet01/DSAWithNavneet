// arr[]={2,4,7,3,11,8,12} target 8
#include<iostream>
using namespace std;

// int linearsearch(int arr[],int n,int x){
//     if(n<0){
//         return 0;
//     }
//     if(arr[n]==x){
//         return 1;
//     }
//     return linearsearch(arr,n-1,x);
// }

int linearsearch(int arr[],int index,int n, int x){
    if(index==n){
        return 0;
    }
    if(arr[index]==x){
        return 1;
    }
    return linearsearch(arr,index+1,n,x);
}

int main(){
    int arr[20]={2,4,7,3,11,8,12};
    int index=0;
    int n=7;
    int x;
    cin>>x;
    // cout<<linearsearch(arr,n-1,x);
    cout<<linearsearch(arr,index,n,x);
    return 0;

}
