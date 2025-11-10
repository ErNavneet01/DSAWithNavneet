// print 1 to n even number
#include<iostream>
using namespace std;

void even(int num, int N){
    if(num>N){
        return;
    }

    if(num%2==0){
    cout<<num<<endl;
    }
    even(num+1,N);

}
// using single argument
void even(int num){
    if(num==2){
        cout<<num<<endl;
        return;
    }
    even(num-1);
    if(num%2==0){
        cout<<num<<endl;
    }

}
int main(){
    int num,N;
    cout<<"Enter num:";
    cin>>num;
    // cout<<"Enter N:";
    // cin>>N;
    // even(num,N);
    even(num);
    return 0;
}