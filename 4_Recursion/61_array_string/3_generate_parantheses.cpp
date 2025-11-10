// generate parantheses 
// if n=2  ()(),(())
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
// Example 1:
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:
// Input: n = 1
// Output: ["()"]

#include<iostream>
#include<vector>
using namespace std;

void parantheses(int n,int l,int r,vector<string>&ans, string &temp){
    if(l==n && r==n)
    // if(l+r==2*n)
    {
        ans.push_back(temp);
        return;
    }
    
    // left ad first
    if(l < n){
       temp.push_back('(');
       parantheses(n,l+1,r,ans,temp);
       temp.pop_back();
    }

    // right add )
    if(r<l){
        temp.push_back(')');
        parantheses(n,l,r+1,ans,temp);
        temp.pop_back();
    }

}
int main(){
    string add,temp;
    int n,l,r;
    l=0,r=0;
    vector<string>ans;
    cout<<"Enter the size of an string:";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>add[i];
    // }

    parantheses(n,l,r,ans,temp);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
