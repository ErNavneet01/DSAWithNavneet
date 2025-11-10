// n=8
// 1 2 3 4 5 6 7 8
#include<iostream>
using namespace std;

// void odd(int num, int n){
//     if(num>n){
//         return;
//     }
//     if(num%2!=0){
//         cout<<num<<endl;
//     }
//     odd(num+1,n);
// }

void odd(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    odd(n-1);
    if(n%2!=0){
        cout<<n<<" ";
    }
}
int main(){
    int num,n;
    cout<<"num:";
    cin>>num;
    cout<<"n:";
    cin>>n;
    // odd(num,n);
    odd(n);
    return 0;
}