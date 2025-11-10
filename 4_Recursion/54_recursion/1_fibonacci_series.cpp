// 0 1 1 2 3 5 8 13 21
// fib(n) = fib(n-1)+fib(n-2);
#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return n;
    }
    
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    cout<<fibo(n);
    return 0;
}
