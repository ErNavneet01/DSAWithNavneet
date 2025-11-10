// an array is given in which duplicate element is given
// [1,1,2]   output is 3!/2!  is equal to 3
// [1,1,2,2]      4!/2!x2! = 6

#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&arr,vector<vector<int>>&ans, int index){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    vector<bool>visited(21,0);
    for(int i=index;i<arr.size();i++){
        if(visited[arr[i]+10]==0){
            visited[arr[i]+10]=1;
            swap(arr[index],arr[i]);
            permute(arr,ans,index+1);
            swap(arr[index],arr[i]);
            // visited[arr[i]+10]=1;       //no issues
            // swap(arr[index],arr[i]);   wrong output
            
        }
    }
}
int main(){
    int n,index=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>ans;
    permute(arr,ans,index);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}


