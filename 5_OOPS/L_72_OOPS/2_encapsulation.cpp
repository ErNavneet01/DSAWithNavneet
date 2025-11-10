// ENCAPSULATION 
#include<iostream>
using namespace std;

class customer{
    string name;
    int balance;
    public:
    customer(string a, int b){
        name=a;
        balance=b;
    }

    void deposite(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Not valid"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<balance<<endl;
    }
};

int main(){
    customer A1("Navneet",1000);
    A1.deposite(500);
    A1.display();
    A1.deposite(-500);
    A1.display();
    return 0;
}
