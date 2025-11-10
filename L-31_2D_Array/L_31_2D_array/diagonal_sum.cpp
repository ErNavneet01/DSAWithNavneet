// 3 4 7 18 -> 32
// 2 8 3 9 -> 22
// 5 4 2 2 -> 13
// 7 3 0 8 -> 18
// 2 8 9 1 -> 20

#include<iostream>
using namespace std;

void max_sum_row(int arr[][5], int row, int col){
    int sum =0,sum2=0;

    int i=0;
    while(i<row){
        sum+=arr[i][i];
        i++;
    }
    i=0;
    int j=col-1;
    while(j>=0){
        sum2+=arr[i][j];
        i++;
        j--;
    }
    cout<<"1st diagonal:"<<sum<<endl;
    cout<<"Second diagonal:"<<sum2;
    
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
