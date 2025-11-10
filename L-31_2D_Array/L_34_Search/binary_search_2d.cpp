// 2 6 10 14 18
// 20 24 27 29 38
// 47 52 78 93 102
// 108 111 200 218 320

#include<iostream>
using namespace std;

void search_2d(int arr[][7], int row, int col, int key){
    // row major approach
    int start = 0, end = (row*col) -1, mid;
    while(start<end){
        mid = start + end - start /2;
        if(arr[mid/col][mid%col] == key){
            cout<<"got it at index:"<<" ";
            cout<<mid;
            break;
        }
        else if(arr[mid/col][mid%col] <= key){
            start=mid+1;
        }
        else{
            end = mid-1;
        }
    }
    

    // 2nd method

    // for(int i=0;i<row;i++){
    //     if(arr[i][0]<=key && arr[i][col-1]<=key){
    //         int start =0, end = col-1;
    //     int mid;
    //     while(start<end){
    //         mid = start + end -start / 2;
    //         if(arr[i][mid] == key){
    //             // return index
    //             cout<<i <<mid;
    //             // return value
    //             // cout<<arr[i][mid];
    //             break;
    //         }
    //         else if(arr[i][mid]<key){
    //             start = mid+1;
    //         }
    //         else{
    //             end = mid-1;
    //         }
    //      }
    //     }
    //     cout<<"Not found:";
        
    // }
}

int main(){
    int arr[8][7], row, col , key;
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

    search_2d(arr,row,col,key);

    return 0;
}

//   BRUT FORCE APPROACH
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         if(arr[i][j]==key){
    //             return 1;
    //         }
    //     }
    // }
    // return 0;


