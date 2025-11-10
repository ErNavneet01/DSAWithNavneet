// arr[]={a,b,c}
#include<iostream>
#include<vector>
using namespace std;

void subsequence(char arr[],int index,int n,vector<vector<char>>&ans,vector<char>temp){
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
    char arr[50];
    int n,index;
    vector<vector<char>>ans;
    vector<char>temp;
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
