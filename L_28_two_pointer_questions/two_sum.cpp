// 2 7 11 15 27 target = 22
#include<iostream>
using namespace std;

void two_sum(int arr[], int n,int target){
    int start = 0, end = n-1;
   while(start<end){
            if(arr[start]+arr[end]==target){
            cout<<start<<" "<<end;
            break;
            }
            else if(arr[start]+arr[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        
}
int main(){
    int arr[100], n, target;
    cout<<"Enter the size of an array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter target value:";
    cin>>target;

    two_sum(arr,n,target);

    return 0;
}