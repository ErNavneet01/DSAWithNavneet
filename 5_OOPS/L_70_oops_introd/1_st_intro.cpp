// oops introduction

#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age,roll_no;
    string grade;
};

int main(){
    // string name,grade;
    // int age,roll_no;
    // cin>>name>>age>>grade>>roll_no;

    // string name1,grade1;
    // int age1,roll_no1;
    // cin>>name1>>age1>>grade1>>roll_no1;

    student s1;
    s1.name = "Navneet";
    s1.age = 21;
    s1.roll_no = 23;
    s1.grade = "A";
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll_no<<" "<<s1.grade<<endl;

    student s2;
    s2.name = "Mohit";
    s2.age = 20;
    s2.roll_no = 25;
    s2.grade = "A+";
    cout<<s2.name<<" "<<s2.age<<" "<<s2.roll_no<<" "<<s2.grade;

    return 0;
}

