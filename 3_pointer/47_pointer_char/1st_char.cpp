// 
#include<iostream>
using namespace std;

int main(){
    // char arr[5] = {'a','b','c','d'};
    // char arr[5] = "1234";
    // char *ptr = arr;
    // cout<<(void*)ptr<<endl;
    // cout<<(void*)arr<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<(void*)ptr<<" ";
    //     ptr++;
    // }

    char name = 'a';
    char *ptr = &name;
    // cout<<name<<endl;
    // cout<<ptr<<endl;

    cout<<static_cast<void*>(&name)<<endl;
    // typecasting is used
    cout<<(void*)&name<<endl;
    cout<<(void*)ptr<<endl;

    return 0;    
}