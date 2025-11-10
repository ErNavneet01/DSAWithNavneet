// POLYMORPHISM
// Function_overloading
#include<iostream>
using namespace std;

class area{
    public:
    int calculate(int r){
        return 3.14*r*r;
    }

    int calculate(int l, int b){
        return l*b;
    }

};

int main(){
    area A1, A2;
    A1.calculate(4);
    A2.calculate(3,4);
    cout<<A1.calculate(4)<<" "<<A1.calculate(3,4);
    return 0;
}