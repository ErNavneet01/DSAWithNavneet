// Double Pointer
#include<iostream>
using namespace std;

int main(){
    int n=10;
    int *p = &n;   //single pointer
    int **p2 = &p; //double pointer
    int ***p3 = &p2;  //triple pointer
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<&p2<<endl;
    cout<<p3<<endl;
    // cout<<p3<<endl;

    // Modifying the value which is in n
    *p = *p+1;     //10+1=11
    cout<<n<<endl;  //11
    **p2 = **p2 + 5;  //11+5=16
    cout<<n<<endl;   //16
    ***p3 = ***p3+5;  //16+5=21
    cout<<n<<endl;   //21


    return 0;
}