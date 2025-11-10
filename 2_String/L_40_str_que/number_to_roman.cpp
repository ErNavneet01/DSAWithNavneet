// 1248
#include<iostream>
#include<vector>
using namespace std;

string integertoroman(int num){
    vector<int> value = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> symbol = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string result;
    for(int i=0;i<value.size();i++){
        while(num >= value[i]){
             num-=value[i];
             result+=symbol[i];
               
        }
    } 
    return result;
    // ***** string return leta h print nahi krwata like void*********/
    // for(int i=0;i<result.size();i++){
    //     cout<<result[i];
    // }
    // cout<<result;
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<integertoroman(num);
    return 0;
}
