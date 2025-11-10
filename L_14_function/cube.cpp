#include<iostream>
using namespace std;

void cube(int &a){
    int b;
    b=a*a*a;
    cout<<b;
}
int main(){
    int b;
    cin>>b;
    cube(b);
    
    return 0;
}