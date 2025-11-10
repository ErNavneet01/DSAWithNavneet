
#include<iostream>
#include<exception>
using namespace std;

int main(){
    try{
        int *p = new int [1000000000];
        cout<<"Memory allocation is successfull";
        delete []p;
    }catch(const exception &e){
        cout<<"Exception occured: "<<e.what();
    }
    return 0;
}