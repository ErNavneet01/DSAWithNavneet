#include<iostream>
using namespace std;

int main(){
    // char  i,j;
    // for(i='a';i<='e';i++){
    //     for(j='a';j<='e';j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    int i,j;
    for(i=1;i<=5;i++){
         char name='a'+i-1;
        for(j=1;j<=5;j++){
            cout<<name<<" ";

        }
        cout<<endl;
    }
    return 0;
}