// circular string matching
#include<iostream>
#include<vector>
using namespace std;

int findlps(vector<int>lps , string s2){
    int pre=0, suf=1;
    while(suf<s2.size()){
        if(s2[pre]==s2[suf]){
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
}

int circularmatch(string s1, string s3){
    string s4=s1+s1;
    // s1+=s4;
    vector<int>longlps(s3.size(),0);
    findlps(longlps,s3);
    int f=0, s=0;
    while(f<s4.size() && s<s3.size()){
        if(s4[f]==s3[s]){
            f++;
            s++;
        }
        else{
            if(s==0){
                f++;
            }
            else{
                s=longlps[s-1];
            }
        }
    }
    if(s==s3.size()){
        return 1;
    }
    return -1;
}
int main(){
    string s1,s2;
    cout<<"S1 :";
    cin>>s1;
    cout<<"s2:";
    cin>>s2;
    cout<<circularmatch(s1,s2);
    return 0;
}
