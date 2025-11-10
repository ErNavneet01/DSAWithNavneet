// find all N bit binary number having morethan equal to 1 than 0 for any prefix
#include<iostream>
#include<vector>

using namespace std;

void find(int n, vector<string>&ans, string temp, int zero, int one){
    if(temp.size()==n){
        // if(one>=zero){
        //     ans.push_back(temp);
        // }
        ans.push_back(temp);
        return;
        
    }

    if(zero<one){
        temp.push_back('0');
        find(n, ans, temp, zero+1, one);
        temp.pop_back();
    }

    temp.push_back('1');
    find(n, ans, temp, zero, one+1);
    temp.pop_back();

}

int main(){
    int n,zero,one;
    cout<<"n:";
    cin>>n;
    vector<string>ans;
    string temp;
    zero=0;
    one=0;
    find(n,ans,temp,zero,one);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
