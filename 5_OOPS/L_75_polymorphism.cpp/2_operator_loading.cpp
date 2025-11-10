// operator overloading
#include<iostream>
using namespace std;

class complex
{
    int real, img;
    public:
    complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
    // default constructor for ans
    complex(){

    }

    complex operator +(complex &c){  //c points to c2
        // i hvae to make default constructor
        complex ans;
        ans.real = real+c.real;
        ans.img = img+c.img;
        return ans;
    }

};
int main(){
    complex c1(3,4);
    complex c2(4,5);
    c1.display();
    c2.display();
    complex c3 = c1+c2;
    c3.display();
    return 0;
}
