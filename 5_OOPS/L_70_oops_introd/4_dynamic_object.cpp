// 
#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age,rollno;
    string grade;
};

int main(){
    student *s = new student;
    (*s).name = "navneet";
    (*s).age = 20;
    (*s).rollno = 24;
    (*s).grade = "A";
    cout<<s->name<<" ";
    cout<<s->age<<" ";

    cout<<s->rollno<<" ";
    cout<<s->grade<<" ";


    s->name = "navneet";
    return 0;
}
