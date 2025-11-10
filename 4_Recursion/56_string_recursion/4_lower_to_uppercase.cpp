// rohit = ROHIT       in function we have to pass string as a refrence
#include<iostream>
using namespace std;

// void lowertoupper(string &str, int index){
//     if(index==-1){
//         return;
//     }
//     if(str[index]>='a' && str[index]<='z'){
//         str[index] = 'A' + str[index]-'a';
//     }
    
//     lowertoupper(str,index-1);
// }

// pass argument as str, size , index
void lowertoupper(string &str, int index, int n){
    if(index==n){
        return;
    }
    if(str[index]>='a'&&str[index]<='z'){
        str[index] = 'A'+str[index]-'a';
    }
    lowertoupper(str,index+1,n);
}

int main(){
    string str;
    cin>>str;
    int n=str.size();
    int index=0;
    lowertoupper(str,index,n);

    // int index = str.size()-1;
    // lowertoupper(str,index);
    cout<<str;

    return 0;
}
