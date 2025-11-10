#include<iostream>
using namespace std;
int main(){
    int package ;
    cout<<"The package is:";
    cin>>package;
    if(package>10){
        cout<<"Accepted";
    }
    else{
        cout<<"Rejected";
    }
    return 0;
}