// While loop

#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=10){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
        i++;
    }
    return 0;
}