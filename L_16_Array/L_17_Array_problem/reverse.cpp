// Reverse an array

#include<iostream>
using namespace std;

int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int i=0,j=8;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    // int temp[10];
    // int i=10;
    // int j=0;
    // while(i>0){
    //     temp[j]=arr[i];
    //     i--;
    //     j++;
    // }
    // while(i<10){
    //     arr[i]= temp[j];
    //     i++;
    //     j++;
    // }

    // // for(i=0;i<10;i++){
    // //     cout<<arr[i]<<" ";
    // // }


    return 0;
}