#include<iostream>
using namespace std;

void four_sum(int arr[], int n, int target){

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // for four sum
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int ans = target - (arr[i]+arr[j]);
            int start = j+1, end = n-1;
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[start]<<" "<<arr[end]<<endl;
                    break;
                }
                else if(arr[start]+arr[end]>ans){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
    }

}

int main(){
    int arr[100], n, key;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    four_sum(arr,n,key);
    return 0;
}

