// 234=432

#include<iostream>
using namespace std;

int main(){
    int num,ans = 0, rem;
    int mul = 10;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans = ans*mul+rem;

    }
    cout<<ans;
    return 0;
}


// ans>INT_MAX/10 || ans<INT_MIN/10

// integer overflow 