#include<iostream>
using namespace std;

int main(){
    int arr[6]={22,44,21,41,25,50};
    int index=-1;
    int x=50;
    int i;
    for(int i=0;i<6;i++){
        if(arr[i]==x){
            index=i;
            break;
        }
        
        
    }
    // cout<<index;
    if(index!=-1){
        cout<<index;
    }
    else{
        cout<<"Not";
    }
  
    return 0;
}