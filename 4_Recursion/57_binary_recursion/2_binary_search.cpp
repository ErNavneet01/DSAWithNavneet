// non decreasing me number increase hote rhna chahiye or same rhte h = ascending
// non increasing me number decrease hota h or same rhna chahiye=descending

// arr[] = {3,8,11,15,20,22}


#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int strt, int end,int x){
    // base condition
    if(strt>n){
        return 0;
    }

    int mid=strt+end-strt/2;
    if(arr[mid]==x){
        return 1;
    }
    else if(arr[mid]<x){
        return binarysearch(arr,n,mid+1,end,x);
    }
    else{
        return binarysearch(arr,n,strt,mid-1,x);
    }
    
}
int main(){
    int arr[20] = {3,8,11,15,20,22};
    int n=sizeof(arr)/sizeof(arr[0]);
    int strt=0, end =5,x=20;
    cout<<binarysearch(arr,n,strt,end,x);
    return 0;
}

 
