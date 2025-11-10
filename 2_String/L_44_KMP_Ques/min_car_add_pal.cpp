// aacecaaaa min char add in to make it plaindrome
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minchar(string s){
    int s1=s.size();
    string rev = s;
    reverse(rev.begin(), rev.end());
    // aaaacecaa
    s+='$';
    // aacecaaaa$
    s+=rev;
    // aacecaaaa$aaaacecaa
    int n = s.size();
    vector<int>lps(n,0);
    int pre=0, suf=1;
    while(suf<n){
        if(s[suf]==s[pre]){
            lps[suf] = pre+1;
            pre++;
            suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else{
                pre = lps[pre-1];
            }
        }
    }
    return (s1-lps[n-1]);

}
int main(){
    string s1;
    cout<<"S1:";
    cin>>s1;
    cout<<minchar(s1);
    return 0;
}
