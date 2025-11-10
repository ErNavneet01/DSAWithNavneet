// Defanging an IP address   1.1.1.1  output is 1[.]1[.]1[.]1

#include<iostream>
using namespace std;

void defanging(string s){
    int index =0;
    string ans;
    while(index<s.size()){
        if(s[index]=='.'){
            ans +="[.]";
        }
        else{
            ans+=s[index];
        }
        index++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}
int main(){
    string add;
    getline(cin,add);

    defanging(add);

    return 0;
}