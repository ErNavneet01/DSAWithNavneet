// 
#include<iostream>
#include<vector>
using namespace std;

class animal{
    public:
    // virtual void speak(){
    //     cout<<"HuHu"<<endl;
    // }

    virtual void speak()=0;   //Abstract calss or pure virtual class. object cannot be created of pure virtual class
};

class dog : public animal{
    public:
    void speak(){
        cout<<"Bark"<<endl;
    }
};
class cat : public animal{
    public:
    void speak(){
        cout<<"Meow"<<endl;
    }
};

int main(){
    // parent class ka pointer jo h apne child class ka address store kra skta h  

    // animal *p;
    // p = new dog();
    // p->speak();

    // dog d1;
    // d1.speak();

    animal *p;
    vector<animal*>animals;
    animals.push_back(new dog());
    animals.push_back(new cat());
    // animals.push_back(new animal());    //in case of pure virtual class
    animals.push_back(new dog());
    animals.push_back(new cat());

    for(int i=0;i<animals.size();i++){
        p = animals[i];
        p->speak();
    }


    return 0;
}
