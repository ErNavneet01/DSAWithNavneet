
#include<iostream>
using namespace std;

class customer
{
    string name;
    int balance, acc_no;
    public:
    customer(string name, int balance, int acc_no){
        this->name = name;
        this->balance = balance;
        this->acc_no = acc_no;
    }

    // deposite
    void deposite(int amount){
        // if(amount<0){
        //     throw "amount should be greater than 0";
        // }     then rest of the code will not execute

        if(amount>0){
            balance+=amount;
            cout<<amount<<" is credited successfully"<<endl;
        }
        else{
            // cout<<"amount should be greater than 0";
            throw "amount should be greater than 0";
        }

    }
    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<balance){
            cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount<0){
            // cout<<"Amount should be greater than 0";
            throw "Amount should be greater than 0";
        }
        else{
            // cout<<"Your balance is low";
            throw "Your balance is low";
        }
    }
};

int main(){
    customer C1("Navneet", 1000, 12345);
    try{
        C1.deposite(100);
        C1.withdraw(6000);
        C1.deposite(100);        //statement 3 will not execute bcz in statement 2 exception is found so rest of the statement will not execute.
    }catch(const char *e){     //*e = stores the char type exception 
        cout<<"Exception occured: "<<e<<endl;
    }
    catch(const runtime_error &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }
    catch(const bad_alloc &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }
    catch(...){
        cout<<"Exception occured:"<<endl;
    }

    return 0;
}