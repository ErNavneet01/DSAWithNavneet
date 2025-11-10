// amazon = azonam
// leetcode = deleetco
#include<iostream>
using namespace std;

void rotateclock(string &s){
    int n = s.size();
    char k = s[n-1];       
    for(int i = n-2;i>=0;i--){
        s[i+1] = s[i];
    }
    s[0]=k;
}

void anticlock(string &s2){
    int n = s2.size();
    char p = s2[0];
    for(int i=1;i<n;i++){
        s2[i-1]=s2[i];

    }
    s2[n-1] = p;
}
int main(){
    string str1, str2;
    cin>>str1;
    cin>>str2;
    string s2=str1 , s=str1;
    rotateclock(s);
    rotateclock(s);
    if(s==str2){
        cout<<1<<endl;
        return 0;
    }
    anticlock(s2);
    anticlock(s2);
    if(s2==str2){
        cout<<1<<endl;
        return 0;
    }
    // return 1;

    cout<<"not possible"; 

    
    return 0;
}
