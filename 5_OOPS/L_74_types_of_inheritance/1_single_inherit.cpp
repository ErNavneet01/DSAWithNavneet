// /single inheritance
#include<iostream>
using namespace std;

class human{
    protected:
    string name;
    int age;

    public:
    // default constructor
    // human(){
    //     cout<<"human\n";
    // }
    human(string name, int age){
        this->name = name;
        this->age=age;
    }
};

class student : public human{
    int roll_no;
    int fees;
    
    public:
    // default constructor
    // student(){
    //     cout<<"Student\n";
    // }

    student(string name, int age, int roll_no, int fees):human(name, age){
        this->roll_no = roll_no;
        this->fees=fees;
    }

    void display(){
        cout<<name<<"  "<<age<<"  "<<roll_no<<"  "<<fees<<endl;
    }
};

int main(){
    // student a;        // parent ka default constructor phele call hoga tb student ka hoga
    student A1("Navneet", 20,23,84);
    A1.display();
    return 0;
}
