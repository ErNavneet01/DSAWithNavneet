// 2nd method
#include<iostream>
using namespace std;

int winner(int n, int k){
    if(n==1){
        return 0;
    }
    return (winner(n-1,k)+k)%n;
}

int main(){
    int n,k;
    cout<<"n:";
    cin>>n;
    cout<<"k:";
    cin>>k;
    // winner(n,k);
    int ans = winner(n, k);
    cout << "Winner is at position: " << ans  << endl;    //for 0 based index
    return 0;
}
