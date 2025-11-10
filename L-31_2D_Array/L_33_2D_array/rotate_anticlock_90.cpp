// 1 2 3 4
// 4 5 6 7
// 8 9 10 11
// 12 13 14 15  rotate 90 anticlock wise 

// solution take transpose and reverse colomn wise

#include<iostream>
using namespace std;

void rotate(int arr[][4], int row, int col){
    // take transpose
    for(int i=0;i<row-1;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // now reverse colomn wise
    for(int j=0;j<col;j++){
        int start=0, end = row-1;
        while(start<end){
            swap(arr[start][j], arr[end][j]);
            start++;
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
    int arr[8][4], row,col;
    cout<<"Row:";
    cin>>row;
    cout<<"Col:";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    rotate(arr,row,col);
    
    return 0;
}


