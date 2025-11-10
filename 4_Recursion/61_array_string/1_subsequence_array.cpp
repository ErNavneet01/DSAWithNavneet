// leetcode 78
// print all subsequence of an array 
// arr[] = {1,2,3,4};

// Given an integer array nums of unique elements, return all possible subsets (the power set).
// The solution set must not contain duplicate subsets. Return the solution in any order.
// Example 1:
// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:
// Input: nums = [0]
// Output: [[],[0]]

#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>temp){
    // base case
    if(index==n){
        ans.push_back(temp);
        return; 
    }
    // if no
    subsequence(arr,index+1,n,ans,temp);
    // if yes
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,ans,temp);
}
// {} null 

int main(){
    int arr[50],n,index;
    vector<vector<int>>ans;
    vector<int>temp;
    cout<<"Enter the size of an array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    index = 0;
    subsequence(arr,index,n,ans,temp);
    // print 2D vector
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
