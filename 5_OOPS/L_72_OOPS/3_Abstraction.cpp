// ABSTRACTION
#include<iostream>
using namespace std;

class customer{
    string name;
    int balance;
    public:
    customer(string name, int balance){
        this->name=name;
        this->balance=balance;
    }
    void deposite(int amount){
        if(amount>0){
            balance+=amount;        //abstraction
        }
        else{
            cout<<"Not accepted"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<balance<<endl;
    }
};

int main(){
    customer A1("Navneet", 1000);
    A1.display();
    A1.deposite(-500);
    A1.display();
    return 0;
}
