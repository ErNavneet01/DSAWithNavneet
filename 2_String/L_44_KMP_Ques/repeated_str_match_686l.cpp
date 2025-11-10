// a=abcd
// b=cdabcdab
#include<iostream>
#include<vector>
using namespace std;
// lps
void lps(vector<int>lps, string s){
    int pre=0, suf=1;
    while(suf<s.size()){
        if(s[pre]==s[suf]){
            lps[suf]= pre+1;
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
}

// string match function
int match_str(string hey, string needle){
    vector<int>longlps(needle.size(),0);
    lps(longlps,needle);
    int f=0,s=0;
    while(f<hey.size() && s<needle.size()){
        if(hey[f]==needle[s]){
            f++;
            s++;
        }
        else{
            if(s==0){
                hey[f]=0;
                f++;
            }
            else{
                s=longlps[s-1];
            }
        }
    }
    if(s==needle.size()){
        return 1;
    }
    return 0;
}

int repeatedstrmatch(string a, string b){
    if(a==b){
        return 1;
    }
    string temp = a;
    int repeat=1;
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }
    // match 
    if(match_str(temp,b)==1){
        return repeat;
    }
    // not match tha repeat one more time
    if(match_str(temp+a,b)){
        return repeat+1;
    } 

    return -1;
}

int main(){
    string a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<repeatedstrmatch(a,b);
    return 0;
}
