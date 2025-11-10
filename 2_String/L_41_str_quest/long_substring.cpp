// a b c d e f 
// window sliding
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lonsubstr(string s){
    
    vector<bool> count(256,0);
    int f=0, S=0, l=0;
    while(S<s.size()){
        while(count[s[S]]){
            count[s[f]]=0;
            f++;
        }
        count[s[S]]=1;
        l = max(l,(S-f+1));
        S++;

    }
    return l;
}
int main(){
    string s;
    cin>>s;
    
    cout<<lonsubstr(s);
    return 0;
}
