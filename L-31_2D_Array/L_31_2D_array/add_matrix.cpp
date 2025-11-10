#include<iostream>
using namespace std;

void add_matrix(int arr1[][4],int arr2[][4],int arr3[][4], int row, int col){
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr3[i][j]<<" ";
        }
    }
}
int main(){
    int arr1[8][4], arr3[8][4], arr2[8][4], row,col;
    cout<<"Enter row:";
    cin>>row;
    cout<<"Enter col:";
    cin>>col;
    cout<<"1st matrix";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"2nd matrix";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr2[i][j];
        }
        // cout<<endl;
    }

    add_matrix(arr1,arr2,arr3,row,col);

    return 0;
}