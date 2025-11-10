//       
#include<iostream>
using namespace std;

class customer{
    public:
    string name;
    int account_balance;
    int balance;

    // default constructor
    // customer(){
    //     cout<<"Constructor is called";
    // }
    customer() {
        name = "Navneet";
        account_balance = 1234;
        balance = 1000;
    }

    // parameterized constructor
    // customer (string name, int account_balance, int balance){
    //     this->name = name;
    //     this->account_balance = account_balance;
    //     this->balance = balance;
    // }

    // for customer a3
    // constructor overloading
    customer (string a, int b){
        name = a;
        account_balance = b;
        balance = 50;
    }

    // inline constructor
    inline customer (string a, int b, int c):name(a),account_balance(b),balance(c){

    }
    void display(){
        cout<<name<<" "<<account_balance<<" "<<balance<<endl;
    }

};

int main(){
    customer a1;
    customer a2("Rohit", 1234,10000);
    customer a3("Mohit ", 23);
    a1.display();
    a2.display();
    a3.display();
    // a3.display();
    // customer a1("Navneet", 126,1000);
    // customer a2("Rohit", 1234,10000);
    // cout<<a1.name<<" "<<a1.account_balance<<" "<<a1.balance<<endl;
    // cout<<a2.name<<" "<<a2.account_balance<<" "<<a2.balance;
    return 0;
}
