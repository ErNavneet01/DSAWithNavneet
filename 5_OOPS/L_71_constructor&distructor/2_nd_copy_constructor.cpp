// 
#include<iostream>
using namespace std;

class customer{
    public:   //access specifier
    string name;
    int account_number;
    int balance;

    // default constructor
    customer(){

    }
    // parameterised custructor
    customer (string a, int b, int c){
        name = a;
        account_number = b;
        balance =c;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
    // copy constructor
    customer (customer &B){    //in copy constructor we have to pass as reference
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;

    }
};

int main(){
    customer A1("Navneet", 123, 1000);
    A1.display();

    customer A2(A1);
    A2.display();
    // for this we have to create default constructor
    customer A3;
    A3=A2;
    A3.display();
    return 0;
}
