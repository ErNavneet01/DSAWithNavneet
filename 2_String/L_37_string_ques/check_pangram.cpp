// // the quick brown Fox jumps over the lazy dog

#include<iostream>
using namespace std;

void pangram(string sen){
    int n=sen.size();
    bool alpha[26] = {0};
    for(int i=0;i<n;i++){
        int index = sen[i]-'a';
        alpha[index] = 1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==0){
            cout<<false;
        }
       
    }
    cout<<true;

}
int main(){
    string s;
    getline(cin,s);

    pangram(s);
    return 0;
}








//  vector<bool>alpha(26,0);
//         for(int i=0;i<sentence.size();i++){
//             int index = sentence[i]-'a';
//             alpha[index] = 1;
//         }
//         for(int i=0;i<26;i++){
//             if(alpha[i]==0)
//             return false;
            
//         }
//         return true;
