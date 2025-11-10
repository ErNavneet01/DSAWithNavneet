// 
#include<iostream>
#include<vector>
using namespace std;

// void swap(int &a,int &b){
//     int temp = a;
//     a=b;
//     b=temp;
//     cout<<&a<<" "<<&b<<endl;
// }

void pass(vector<int>&temp){
    for(int i=0;i<5;i++){
        temp[i] =20;
    }
}

int main(){
    // int f=10, s=20;
    // cout<<&f<<" "<<&s<<endl;
    // swap(f,s);
    // cout<<f<<" "<<s<<endl;
    vector<int>v(5,0);
    pass(v);
    for(int i =0;i<5;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
