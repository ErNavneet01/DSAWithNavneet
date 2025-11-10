// factorial of a number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void factorial(int num){
    vector<int>ans = {1};
    int res, carry=0;
    while(num>1){
       int size = ans.size();
        for(int i=0;i<size;i++){
            res = ans[i]*num+carry;
            ans[i]=res%10;
            carry = res/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        num--;
        
    }
    reverse(ans.begin(),ans.end());
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    factorial(num);
    return 0;
}