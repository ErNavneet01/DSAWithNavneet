// 2 3 4 5
// 1 2 6 8
// 4 9 3 2

#include<iostream>
using namespace std;

void reverse_matrix(int arr[][5], int row, int col){
    for(int i=0;i<row;i++){
        int strt= 0, end =col-1;
        while(strt<end){
            swap(arr[i][strt],arr[i][end]);
            strt++;
            end--;
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
    int arr[10][5],row,col;
    cout<<"row:";
    cin>>row;
    cout<<"col:";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }    
    reverse_matrix(arr,row,col);
    return 0;
}
