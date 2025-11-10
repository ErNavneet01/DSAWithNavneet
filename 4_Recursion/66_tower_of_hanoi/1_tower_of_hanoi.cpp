// Tower of hanoi

#include<iostream>
using namespace std;

void towerofhanoi(int n, int s, int h, int d){
    // Base condition
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }

    // move n-1 element to the helper
    towerofhanoi(n-1,s,d,h);
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;

    // move  disk from help to destination
    towerofhanoi(n-1,h,s,d);
}
int main(){
    int n;
    cout<<"n:";
    cin>>n;
    int s,h,d;
    s=1;
    h=2;
    d=3;
    towerofhanoi(n,s,h,d);
    return 0;
}