// 121 = 121
#include<iostream>
using namespace std;
int main(){
    int x=121, rem, ans=0;
    
    cout<<"Enter the number:";
    cin>>x;
    int num=x;
    while(num!=0){
        rem = num%10;
        num = num/10;
        ans = ans*10+rem;
    }
    // cout<<ans;
    if(x==ans){
        cout<<"The number is pallindrom:"<<ans;
    }
    else{
        cout<<"Not pal:";
    }
    return 0;
}