// NAVNEET navneet
#include<iostream>
using namespace std;
// void upperrtolower(string str, int n)    is me koi change nhi hoga so string ko as refrence bhejna hoga


// void upperrtolower(string &str, int n){
//     if(n==-1){
//         return;
//     }
//     if(str[n]>='A' && str[n]<='Z'){
//         str[n] = 'a'+str[n]-'A';
//     }
//     upperrtolower(str,n-1);
// }


// pass argument as str, size , index
void uppertolower(string &str,int index, int n){
    if(index == n){
        return;
    }
    if(str[index]>='A' && str[index]<='Z'){
        str[index] = 'a'+str[index]-'A';
    }
    uppertolower(str,index+1,n);
}

int main(){
    string str;
    cin>>str;
    int n=str.size()-1;
    int index=0;
    // upperrtolower(str,n);
    uppertolower(str,index,n);
    cout<<str;
    return 0;
}
