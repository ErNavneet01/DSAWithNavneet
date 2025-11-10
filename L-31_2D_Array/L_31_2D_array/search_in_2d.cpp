//  x=7
#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col ){
    // print colum wise

        for(int j =0;j<col;j++){
            for(int i=0;i<row;i++){   
            cout<<arr[i][j]<<" ";
             }
        }
}

int main(){
    int arr[3][4];
    int x=7;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
// find an element in our array
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==x)
            cout<<"index:"<<i*3+j<<endl;
        }
    }
    cout<<"not found:"<<endl;
    printcol(arr,3,4);

    return 0;
}
