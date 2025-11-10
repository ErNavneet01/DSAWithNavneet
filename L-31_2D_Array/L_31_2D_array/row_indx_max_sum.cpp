// 3 4 7 18 -> 32
// 2 8 3 9 -> 22
// 5 4 2 2 -> 13
// 7 3 0 8 -> 18
// 2 8 9 1 -> 20

#include<iostream>
using namespace std;

void max_sum_row(int arr[][5], int row, int col){
    int sum = INT8_MIN, index = -1;
    for(int i=0;i<row;i++){
        int total = 0;
        for(int j=0;j<col;j++){
            total+=arr[i][j];
            if(total>sum){
                sum = total;
                index = i;
            }
        }
    }
    cout<<"Max sum row is:"<<index;
}
int main(){
    int arr[8][5],row,col;
    cout<<"Enter row:";
    cin>>row;
    cout<<"Enter col:";
    cin>>col;
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    max_sum_row(arr,row,col);

    return 0;
}
