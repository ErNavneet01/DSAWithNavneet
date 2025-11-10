// 3 4 -5 8 -12 7 6 -2
// 3 7  2 10 0  7 13 11    prefix sum  
// Kadane's algorithm state that whenever prefix sum is negative than let that sum be 0 and follow prefix sum further

#include<iostream>
using namespace std;

int max_sum_subarray(int arr[], int n){
    int prefix = 0, maxi = INT8_MIN;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi = max(maxi,prefix);
        if(prefix<0){
            prefix = 0;
        }
    }

    return maxi;

}
int main(){
    int arr[100], n;
    cout<<"Enter array size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The max sum of subarray is:";
    cout<<max_sum_subarray(arr,n);

    return 0;
}
