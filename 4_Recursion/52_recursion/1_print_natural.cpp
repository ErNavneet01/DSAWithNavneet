// print 1 to n natural number using recursion
#include<iostream>
using namespace std;
// its using two argument
void print(int num, int N){
    // base case
    if(num==N){
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}

// using one argument
void print(int num){
    // base case
    if(num==1){
        cout<<num<<endl;
        return;
    }
    print(num-1);
    cout<<num<<endl;
}
int main(){
    int N,num;
    // cout<<"Enter n:";
    // cin>>N;
    cout<<"num:";
    cin>>num;
    // print(num,N);
    print(num);

    return 0;
}
