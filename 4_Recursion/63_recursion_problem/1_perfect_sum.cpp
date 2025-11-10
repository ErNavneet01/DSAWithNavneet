// An array is given [3,5,6,1] sum = 8 and we have to find the total subsets of sum.
#include<iostream>
using namespace std;

int perfectsum(int arr[],int index,int n,int sum){
    // if(sum==0){
    //     return 1;
    // }
    // if(index==n || sum<0){
    //     return 0;
    // }

    // for negative or zero value
    if(index==n){
        if(sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }

    return perfectsum(arr,index+1,n,sum) + perfectsum(arr,index+1,n,sum-arr[index]);


}
int main(){
    int arr[20],n,index,sum;
    cout<<"Enter the size of an array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum value:";
    cin>>sum;
    
    index=0;
    cout<<"The subset of perfect sum is:";
    cout<<perfectsum(arr,index,n,sum);
    return 0;
}
