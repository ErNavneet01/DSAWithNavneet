// leap year
// 400 se divide ho jaye oo leap year
// if number is divide by 4 but not by 100 is leap year

#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year:";
    cin>>year;
    if(year%400==0){
        cout<<"leap year "<<year<<endl;
    }
    else if(year%4==0 && year%100!=0){
        cout<<"leap year "<<year<<endl;
    }
    else{
        cout<<"Not leap year "<<year;
    }
    return 0;
}