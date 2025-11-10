// 20 19 18 16
// 15 14 13 12 
// 11 10 9 8
// 7 6 5 4
#include<iostream>
using namespace std;
void binary_search(int arr[][4], int row , int col, int target){
    
    int start = 0, end = col*row-1, mid;
    while(start<= end){
        mid = start+(end -start)/2;
        
        if(arr[mid/col][mid%col]==target){
            cout<<mid;
            break;
        }
        else if(arr[mid/col][mid%col]>target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }
    if(!target){
        cout<<"not found";
    }
    
}
int main(){
    int arr[8][4], row, col , key;
    cout<<"Enter row:";
    cin>>row;
    cout<<"Enter col:";
    cin>>col;

    cout<<"Enter array elements:";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter key:";
    cin>>key;

    binary_search(arr,row,col,key);

    return 0;
}
