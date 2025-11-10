//  
#include<iostream>
using namespace std;

class student{
    protected:
    string name;

    public:
    student(string name){
        this->name = name;
    }
};

class male{
    protected:
    int age , weight;

    public:
    male(int age, int weight){
        this->age =age;
        this->weight = weight;
    }
};

class female{
    protected:
    int age ,weight;

    public:
    female(int age, int weight){
        this->age =age;
        this->weight = weight;
    }

};

class boy: public student, public male
{
    protected:
    int rollno;

    public:
    boy(string name, int age, int weight, int rollno):student(name), male(age,weight){
        this->name =name;
        this->age = age;
        this->weight = weight;
        this->rollno = rollno;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<rollno<<endl;
    }
};
class girl: public student, public female
{
    protected:
    int rollno;

    public:
    girl(string name, int age, int weight, int rollno): student(name),female(age,weight){
        this->name =name;
        this->age = age;
        this->weight = weight;
        this->rollno = rollno;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<rollno<<endl;
    }
};

int main(){
    boy b1("Navneet",20,60,26);
    b1.display();
    girl g1("Nisha",21,60,25);
    g1.display();
    return 0;

}