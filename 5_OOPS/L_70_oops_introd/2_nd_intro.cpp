// 

#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age,roll_no;
    string grade;
    // function getter and setter 
    // we can access private attribute inside the same class
    // setter function in which we can assign the value
    public:
    void setname(string n){
        name = n;
    }
    void setage(int x){
        age = x;
    }
    void setroll_no(int r){
        roll_no = r;
    }
    void setgrade(string g){
        grade = g;
    }
    // getter function is used to print values
    void getname(){
        cout<<name<<" ";
    }
    void getage(){
        if(age<0 || age>100){
            cout<<"Invalid age:";
            return;
        }
        cout<<age<<" ";
    }

    // // if we want to print in main function
    // int getage(){
    //     return age;
    // }
    void getroll_no(){
        cout<<roll_no<<" ";
    }
    // void getgrade(){
    //     cout<<grade<<" ";
    // }
    
    // no one can access my data randomly so we add some pin , if they enter the pin correct then they get the result otherwise no'[]
    string getgrade(int pin){
        if(pin==123){
            return grade;
        }
        else{
            return "not eligible";
        }
    }
};
int main(){
 //user define datatype    variable 
    student s1;
    
    s1.setname("Navneet");
    // s1.setage(200);
    s1.setage(20);
    s1.setroll_no(2312619);
    s1.setgrade("A");
    // cout<<s1.setname<<" "<<s1.setage<<" ";

    s1.getname();
    s1.getage();
    s1.getroll_no();
    // s1.getgrade();
    int pin;
    cin>>pin;
    cout<<s1.getgrade(pin);

    return 0;
}
