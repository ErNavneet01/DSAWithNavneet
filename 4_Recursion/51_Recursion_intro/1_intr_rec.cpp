// 
#include<iostream>
using namespace std;
void function3(int n){
    if(n==0){
        cout<<"Happy Birthday\n";
        return;
    }
    cout<<n<<" Days left for Birthday\n";
    function3(n-1);
}
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    // Iterative approach
    // for(int i=n;i>0;i--){
    //     cout<<i<<" Days left for birthday"<<endl;
    // }
    // cout<<"Happy Birthday";

    // recursion
    function3(n);
    return 0;
}
