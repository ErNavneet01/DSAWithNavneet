
#include<iostream>
using namespace std;

class human{
    protected:
    string name;
    int age;
    int weight;

    public:
    human(string name, int age , int weight){
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

};

class student : public human{
    protected:
    int roll_no, fees;
    public:
    student(string name, int age, int weight, int roll_no,int fees):human(name, age, weight){
       this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees; 
    }

    void dispaly(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_no<<" "<<fees<<endl;
    }
};

class teacher : public human{
    protected:
    int salary;

    public:
    teacher(string name, int age, int weight,int salary):human(name, age, weight){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->salary= salary;
    }
    void dispaly(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<salary<<" "<<endl;
    }
};

int main(){
    teacher A1("Navneet", 20, 60, 600);
    student A2("Mohit", 20,60,23,51);
    A1.dispaly();
    A2.dispaly();

    return 0;
}