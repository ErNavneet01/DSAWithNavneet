#include<iostream>
using namespace std;

int main(){
    // initialization of string
    // string s = "navneet";
    // cout<<s;

    // user input
    // string s = "Navneet Gupta";
    // string s = "navneet is a \"good\" boy";
    // navneet is a \"good\" boy

    // to print a line
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s.size();

    return 0;
}