// print even number when n is even || print n naturals number
#include<iostream>
using namespace std;

void even(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;
    even(n-2);
}
void natural(int n){
    if(n==1){
        cout<<n;
        return;
    }
    cout<<n<<endl;
    natural(n-1);
}
int main(){
    int n;
    cin>>n;
    // even(n);
    natural(n);
    return 0;
}