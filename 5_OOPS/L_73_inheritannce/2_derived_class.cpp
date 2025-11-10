
#include<iostream>
using namespace std;

class human{
    // string name;
    // int age, weight;
    string religion , color;      //non-necessary information ko humlog private me rakhte h log
    protected:
    string name;
    int age, weight;
    // public:
    // string name;
    // int age,weight;
};
class student:protected human{
    int roll_no, fees;    //by default privte hota h

    public:
    void fun(string name, int age, int weight){
        this->name = name;
        this->age = age;
        this->weight = weight;
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};

int main(){
    student A;
    student A1;
    // A.name = "navneet";   //it cannot be access outside the class bcz name & age& weight is private in parent class, so it cannot be access.
    // A.name = "navneet"; //same there we cannot access bca it is protected in parent class.
    
    // we cannot access protected outside the class
    // A.name = "Navneet";
    // A.age = 20;
    // A.weight = 60;
    // cout<<A.name<<" "<<A.age<<" "<<A.weight;

    A.fun("Navneet",20,60);
    A1.fun("Navneet",22,80);


    return 0;
}
