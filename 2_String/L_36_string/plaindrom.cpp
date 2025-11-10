// naman
#include<iostream>
using namespace std;

int main(){
    string s = "namans";
    int start =0 , end = s.size()-1;
    while(start<end){
        if(s[start]==s[end]){
            cout<<"yes plaindrome";
            return 0;
        }
        start++, end--;
    }
    cout<<"not plaindrome";
    return 0;
}
