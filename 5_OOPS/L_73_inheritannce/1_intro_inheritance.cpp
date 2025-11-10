// 
#include<iostream>
using namespace std;

class human{
    private:
    string name;
    protected:
    int age;
    
    public:
    int weight;

    void fun(){
        name="Navneet";
        age = 20;
        weight = 60;
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};

int main(){
    human A1;
    // A1.name = "Navneet";  //we cannot access private data outside the class
    // A1.age = 20;
    A1.weight = 60;
    A1.fun();
    return 0;
}

