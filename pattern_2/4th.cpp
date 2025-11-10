//      A
//    A B
//  A B C
// AB C D
//ABC D E

#include<iostream>
using namespace std;
int main(){
    int row,col;
    int n;
    cout<<"Enter numbar:";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<"  ";
        }
        // char name='A'+row-1;
        for(char name ='A';name<='A'+row-1;name++){
            
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}
