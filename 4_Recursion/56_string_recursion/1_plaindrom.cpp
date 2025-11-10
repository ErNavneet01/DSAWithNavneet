// mom  
// naman 
#include<iostream>
using namespace std;

bool checkplaindrom(string str,int start, int end){
    if(start>=end){
        return 1;
    }
    // not match
    if(str[start]!=str[end]){
        return 0;
    }
    // match
    return checkplaindrom(str,start+1,end-1);
}

int main(){
    string str;
    cin>>str;
    int start =0, end = str.size()-1;
    cout<<checkplaindrom(str,start,end);
    return 0;
}