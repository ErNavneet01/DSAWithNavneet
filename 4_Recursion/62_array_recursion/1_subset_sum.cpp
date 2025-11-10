// 3 4 5
#include<iostream>
#include<vector>
using namespace std;

void subsetsum(int arr[], int index, int n, int sum,vector<int>&ans){
    if(index==n){
        // cout<<sum<<" ";
        ans.push_back(sum);    //if we want our ans will print in main function
        return;
    }
    // no
    subsetsum(arr,index+1,n,sum,ans);
    // yes
    subsetsum(arr,index+1,n,sum+arr[index],ans);
}

int main(){
    int arr[100],n,index,sum=0;
    vector<int>ans;
    cout<<"Enter the size pf an array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    index=0;
    subsetsum(arr,index,n,sum,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}