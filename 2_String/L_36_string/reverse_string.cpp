// Navneet reverse this string
#include<iostream>
using namespace std;

int main(){
    string s = "navneet is a good boy";
    int start =0, end = s.size()-1;
    int size = 0;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    cout<<s<<endl;
    cout<<sizeof(s)<<endl;
    // size of string
    while(s[size]!='\0'){
        size++;
    }
    cout<<size;

    return 0;
}