// nth stair 
// f(n) = f(n-1)+f(n-2);  using this we can reach at top
#include<iostream>
using namespace std;

int stair(int n){
    // base case
    if(n<=2){
        return n;
    }
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    cout<<"Enter nth stair number:";
    cin>>n;

    // USING FOR LOOP

    // int num1=1;
    // int num2=2;
    // int fib;
    // for(int i=3;i<=n;i++){
    //     fib = num1+num2;
    //     num1=num2;
    //     num2=fib;
    // }
    // cout<<fib;

    // USING RECURSION METHOD

    cout<<stair(n);
    return 0;
}