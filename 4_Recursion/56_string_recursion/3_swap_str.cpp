// rohit = tihor
#include<iostream>
using namespace std;
// in function we have to pass string as a reference
void reverse(string &s, int start,int end){
    if(start>=end){
        return;
    }
    char c = s[start];
    s[start] = s[end];
    s[end]=c;
    reverse(s,start+1,end-1);
}
int main(){
    string s;
    cin>>s;
    int start=0, end=s.size()-1;
    reverse(s,start,end);
    cout<<s;

    return 0;
}
