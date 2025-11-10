// 
#include<iostream>
using namespace std;

class human{
    string color, religion;
    protected:
    string name;
    int age, weight;
};

class student : private human{
    private: 
    int roll_no, fees;

    public:
    //constructor
    student(string name, int age, int weight, int roll_no, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" age is : "<<age<<" weight is: "<<weight<<" roll_no is: "<<roll_no<<" fees is: "<<fees<<endl;
    }
};

int main(){
    student A("navneet",20,60,2312619,8650000);
    A.display();

    return 0 ;
}
