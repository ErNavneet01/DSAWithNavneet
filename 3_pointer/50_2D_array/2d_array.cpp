// create 2d array using pointer
#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    // create 2d array
    int **ptr1 = new int*[n];
    for(int i=0;i<n;i++){
        ptr1[i] = new int[m];
    }
    // take input from user
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>*(*(ptr1+i)+j);
        }
    }
    // display elements
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<*(*(ptr1+i)+j)<<" ";
        }
        cout<<endl;
    }
    // delete memory from heap
    for(int i=0;i<n;i++){
        delete[] ptr1[i];
    }
    delete[] ptr1;
    return 0;
}