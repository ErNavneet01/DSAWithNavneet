// to keep the record number of customer is created , we use static data members 
#include<iostream>
using namespace std;

class customer{
    string name;    //they are parts of object
    int acc_no,balance;
    static int total_customer;   //static member is initialized outside the class  IT create only once. It is part of class
    static int total_balance;
    public:
    // static int total_customer;   
    customer(string name, int acc_no, int balance){
        this->name = name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }
// static member function access only static data members
    static void accessstatic(){
        cout<<"Total number of customer:"<<total_customer<<endl;
        cout<<"Total balance:"<<total_balance<<endl;

    }

    void deposite(int amount){
       balance -= amount;
       total_balance+=amount;
    }

    void withdrawal(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }


    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customer<<endl;
    }
    void total_display(){
        cout<<total_customer<<endl;
    }
    
};
// :: -> resolution operator
// data_type class_name::static_variable_name=0;
int customer::total_customer=0;
int customer::total_balance=0;

int main(){
    customer A1("Navneet",1234,1000);
    customer A2("Naveen",124,100);
    customer A3("Rohit",12,10000);

    // A1.display();
    // A2.display();
    // A3.display();

    // static function 
    customer::accessstatic();
    A1.deposite(500);
    customer::accessstatic();
    A2.withdrawal(50);
    customer::accessstatic();



    // // static attribute can be access without object created
    // customer::total_customer=5;
    // A1.total_display();

    return 0;
}
