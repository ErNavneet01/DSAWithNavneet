// MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class engineer{
    public:
    string specilization;
    engineer(string specilization){
        this->specilization = specilization;
    }

};

class youtuber{
    public:
    int subscriber;
    youtuber(int subscriber){
        this->subscriber = subscriber;
    }
};

class codeteacher : public engineer, public youtuber{
    public:
    string name;

    codeteacher(string specilization, int subscriber, string name):engineer(specilization),youtuber(subscriber){
        this->specilization = specilization;
        this->subscriber = subscriber;
        this->name = name;
    }

    void display(){
        cout<<specilization<<" "<<subscriber<<" "<<name<<endl;
    }
};

int main(){
    codeteacher A1("CSE", 50, "Navneet");
    A1.display();
    return 0;
}
