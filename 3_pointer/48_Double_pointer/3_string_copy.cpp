// first = Navneet
// second = rohit

#include<iostream>
using namespace std;

void strcopy(char *str1, char *str2){
    while(*str1 = *str2){
        str1++,str2++;
    }
}
int main(){
    char first[] = "Navneet";
    char second[] = "Rohit";
    strcopy(first,second);
    cout<<first;  
    return 0;
}