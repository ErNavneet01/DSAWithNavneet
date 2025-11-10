// Using function change the value of n

#include<iostream>
using namespace std;

// void fun(int *p4){
//     *p4 = *p4+5;
// }
// changing the address of p
void fun(int **p4){
    *p4 = *p4+1;
}

int main(){
    int n=10;
    int *p = &n;
    int **p1 = &p;
    // fun(p);
    // cout<<n<<endl;
    // cout<<*p<<endl;
    cout<<p<<endl;
    fun(p1);
    cout<<p<<endl;
    return 0;
}
