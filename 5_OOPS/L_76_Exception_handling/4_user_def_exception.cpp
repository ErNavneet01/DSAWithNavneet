

#include<iostream>
using namespace std;

class invalidamounterror:public runtime_error{
    public:
    invalidamounterror(const string &msg):runtime_error(msg){}
};
class insufficentamount:public runtime_error{
    public:
    insufficentamount(const string &msg):runtime_error(msg){}
};
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
        
        if(amount>0){
            balance+=amount;
            cout<<amount<<" is credited successfully"<<endl;
        }
        else{
            throw invalidamounterror("amount should be greater than 0");
        }

    }
    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<balance){
            cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount<0){
            throw invalidamounterror("Amount should be greater than 0");
        }
        else{
            throw insufficentamount("Your balance is low");
        }
    }
};

int main(){
    customer C1("Navneet", 1000, 12345);
    try{
        C1.deposite(0);
        C1.withdraw(6000);
        C1.deposite(100);       
    }catch(const char *e){   
        cout<<"Exception occured: "<<e<<endl;
    }
    catch(const invalidamounterror &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }
    catch(const insufficentamount &e){
        cout<<"Exception occured:"<<e.what()<<endl;
    }
    

    return 0;
}