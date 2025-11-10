// without using extra array we can do it in the same array using swapping
#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&arr,int index,int n,vector<vector<int>>&ans){
    if(index==n){
        ans.push_back(arr);
    }
    for(int i=index;i<n;i++){
        swap(arr[i],arr[index]);
        permute(arr,index+1,n,ans);
        swap(arr[i],arr[index]);  //back to original position

    }
}

int main(){
    int n,index;
    cout<<"enter n:";
    cin>>n;
    vector<vector<int>>ans;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    index=0;
    permute(arr,index,n,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}