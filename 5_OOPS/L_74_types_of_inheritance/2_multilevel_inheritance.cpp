// Multilevel Inheritance

#include<iostream>
using namespace std;

class person{
    protected:
    string name;
    int age;

    public:
    person(string name, int age){
        this->name = name;
        this->age = age;
    }

};

class employee : public person{
    protected:
    int salary;
    public:
    employee(string name, int age, int salary):person(name,age){
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
};

class manager : public employee{
    string department;
    int no_of_employ;

    public:
    manager(string name, int age, int salary, string department, int no_of_employ):employee(name, age, salary){
        this->name = name;
        this->age = age;
        this->salary = salary;
        this->department = department;
        this->no_of_employ = no_of_employ;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<department<<" "<<no_of_employ<<endl;
    }
};

int main(){
    manager A1("Navneet",20,2000,"CSE",50);
    A1.display();
    return 0;
}

