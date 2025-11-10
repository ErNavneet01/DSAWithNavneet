// 249 = 15 = 6
#include<iostream>
using namespace std;

int main(){

    int num;
    cin>>num;
    while(num>9){
        int ans=0, rem;
        while(num>0){
            rem = num%10;
            num = num/10;
            ans = rem+ans;

        }
        num = ans;
        
    }
    cout<<num;
    
    return 0;
}