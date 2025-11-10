#include<iostream>
using namespace std;

void spiral(int arr[][4], int row,int col){
    int top = 0,bottom = row-1, right = col-1, left =0;
    
    while(top<=bottom && left<=right){
        // top
        for(int j=left;j<=right;j++){
            cout<<arr[top][j]<<" ";
        }
        top++;
        cout<<endl;
        // right
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        cout<<endl;
       // bottom
       if(top<=bottom){
        for(int j=right;j>=left;j--){
            cout<<arr[bottom][j]<<" ";
            
        }
        bottom--;
       }
       cout<<endl;

       // left
       if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
       }
       cout<<endl;
    }
}
int main(){
    int arr[10][4], row,col;
    cout<<"Enter row:";
    cin>>row;
    cout<<"Enter col:";
    cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    spiral(arr,row,col);

    return 0;
}