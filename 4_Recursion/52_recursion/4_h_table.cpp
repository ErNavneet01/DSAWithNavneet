// 2x1=2
// 2x2=4
#include<iostream>
using namespace std;
void table(int num, int n){
    if(n<=0){
        // cout<<1<<" ";
        return ;
    }
    table(num,n-1);
    cout<<num <<"X"<< n <<"=" << num*n<<endl;
}
int main(){
    int num,n;
    cout<<"num:";
    cin>>num;
    cout<<"n:";
    cin>>n;
    table(num,n);
    return 0;
}