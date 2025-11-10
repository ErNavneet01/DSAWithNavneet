// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include<iostream>
using namespace std;

void rotate(int arr[][4], int row, int col){
    // first rotate colomn wise
    for(int j=0;j<col;j++){
        int start = 0, end = row-1;
        while(start<end){
            swap(arr[start][j],arr[end][j]);
            start++;
            end--;
        }
    }

    // then rotate row wise
    for(int i=0;i<row;i++){
        int start = 0, end = col-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }
    // print array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr[8][4], row,col;
    cout<<"Entert row:";
    cin>>row;
    cout<<"Col:";
    cin>>col;
    cout<<"Enter array element is:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    rotate(arr,row,col);

    return 0;
}
