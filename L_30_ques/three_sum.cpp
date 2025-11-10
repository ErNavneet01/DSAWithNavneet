// 1 4 45 6 10 8  first sort 1 4 6 8 10 45  
#include<iostream>
using namespace std;

void three_sum(int arr[], int n, int x){

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n-2;i++){
        int start = i+1, end = n-1;
        int find = x-arr[i];
        while(start<end){

            if(arr[start]+arr[end]==find){
               cout<<arr[i]<<" ";
               cout<<arr[start]<<" "<<arr[end]<<" ";
               break;
            }
            else if(arr[start]+arr[end]>find){
                end--;
            }
            else{
                start++;
            }
        }    
    }
    // return 0;
}

int main(){
    int arr[100], n, x;
    cout<<"Enter n:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter x:";
    cin>>x;

    three_sum(arr,n,x);

    return 0;
}