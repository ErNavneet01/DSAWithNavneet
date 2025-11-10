#include<iostream>
using namespace std;

void transpose(int arr[][4], int row, int col){
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[5][4], row,col;
    cout<<"Row:";
    cin>>row;
    cout<<"Col:";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr,row,col);
    
    return 0;
}
