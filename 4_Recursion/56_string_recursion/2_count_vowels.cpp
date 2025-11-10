// amanos
#include<iostream>
using namespace std;
int countvowel(string s,int i){
    if(i==-1){
        return 0;
    }

    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i] == 'o' || s[i]=='u'){
        return 1+countvowel(s,i-1);
    }
    return countvowel(s,i-1);

}
int main(){
    string s = "arohit";
    int i=s.size();
    cout<<countvowel(s,i);

    // int count=0;
    // for(int i=0;i<=s.size();i++){
    //     if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i] == 'o' || s[i]=='u'){
    //         count++;
    //     }
    // }
    // cout<<count;

    return 0;
}