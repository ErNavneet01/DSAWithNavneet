// haystack = "sadbutsad", needle = "sad"
#include<iostream>
#include<vector>
using namespace std;

void findlps(vector<int>lps , string s){
    int pre=0, suf=1;
    while(suf<s.size()){
        if(s[pre]==s[suf]){
            lps[suf]=pre+1;
            pre++;
            suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else{
                lps[pre] = pre-1;
            }
        }
    }
    // cout<<lps[s.size() - 1];
}
int matchstr(string hey, string need){
    // to find longest prefix and sufix
    vector<int>longlps(need.size(),0);
    findlps(longlps, need);
    int start=0, second=0;
    while(second<need.size() && start<hey.size()){
        if(hey[start]==need[second]){
            start++;
            second++;
        }
        else{
            if(second==0){
                start++;
            }
            else{
                second = longlps[second-1];
            }
        }
    }
    if(second==need.size()){
        return start-second;

    }
    return -1;
}

int main(){
    string s1,s2;
    cout<<"S1 :";
    cin>>s1;
    cout<<"s2:";
    cin>>s2;
    cout<<matchstr(s1,s2);
    return 0;
}
