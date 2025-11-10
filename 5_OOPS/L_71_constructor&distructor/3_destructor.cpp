// 
#include<iostream>
using namespace std;

class customer{
    string name;
    int *balance;
    public:
    // customer(string name, int bal){
    //     this->name = name;
    //     balance = new int;
    //     *balance = bal;
    // }
    // 

    // customer(){
    //     name = "Navneet";
    //     balance = new int;
    //     *balance = 1000;
    //     cout<<"Constructor is called"<<endl;
    // }
    // // destructor
    // ~customer(){
    //     cout<<"Destructor is called";
    // }
 
    customer(){
        name = "4";
        cout<<"4"<<endl;
    }
    // constructor calls in order wise
    customer(string name){
        this->name= name;
        cout<<"contructor"<<name<<endl;
    }
    // destructor is called in reverse order
    ~customer(){
        cout<<"Destructor"<<name<<endl;
    }
};

int main(){
    customer A1("1"),A2("2"),A3("3");
    customer *A4 = new customer;
    delete A4;  //to delete dynamically created object

    return 0;
}
