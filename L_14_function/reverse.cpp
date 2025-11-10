#include<iostream>
using namespace std;

void reverse(int &num){
    int rem, ans=0;
    // cin>>num;                  //yahi pe koi need nhi h user input lene ka?
    while(num!=0){
        rem = num%10;
        num = num/10;
        ans = ans*10+rem;

    }
    cout<<ans;
}

int main(){
    int a;
    cin>>a;
    reverse(a);

    return 0;
}