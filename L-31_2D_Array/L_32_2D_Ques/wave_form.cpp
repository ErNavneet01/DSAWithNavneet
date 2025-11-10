#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void wave(int arr[][4], int row,int col){
    cout<<"wavw form:"<<endl;
    for(int j=0;j<col;j++){
        if(j%2==0){
            for(int i=0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

}
int main(){
    int arr[8][4], row,col;
    cout<<"enter row:";
    cin>>row;
    cout<<"Enter col:";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    wave(arr,row,col);
    return 0;
}