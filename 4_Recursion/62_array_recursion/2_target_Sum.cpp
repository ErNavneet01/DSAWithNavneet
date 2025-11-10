// 3 4 5 6 target 12
#include<iostream>
using namespace std;

bool findtarget(int arr[], int index, int n,int target){
    if(target ==0){
        return 1;
    }   
    if(index==n || target<0 ){
        return 0;
    }

    return findtarget(arr,index+1,n,target-arr[index])||findtarget(arr,index+1,n,target);
}

int main(){
    int arr[10],n,index,target;
    cout<<"Enter the size of an array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    index = 0;
    target = 12;
    cout<<"Terget found in array:";
    cout<<findtarget(arr,index,n,target);
    return 0;
}

