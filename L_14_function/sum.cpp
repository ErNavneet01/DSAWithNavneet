#include<iostream>
using namespace std;
// function declare
int sum(int a, int b){  
    // function define    //   
    int sum=a+b;
    return sum;
}
void hello(){
    cout<<"Hello coder army";
}
int main(){
    int x, y,o,p;
    cin>>x>>y>>o>>p;
    cout<<sum(x,y)<<endl;
    cout<<sum(o,p)<<endl;
    hello();


    return 0;
}