// print an array  3 7 6 2 8

#include<iostream>
using namespace std;

// print array using two parameter
void print(int arr[], int index, int n){
    if(index==n){
        return;
    }
    print(arr,index+1,n);       //for printing array element in reverse order
    cout<<arr[index]<<" ";
    // print(arr,index+1,n);     //for printing array in descending order   
}


// // print array using one parameter
void print(int arr[], int n){
    if(n==0){
        cout<<arr[n]<<" ";
        return;
    }
    // cout<<arr[n]<<" ";    //printing array elements in reverse order
    print(arr,n-1);
    cout<<arr[n]<<" ";  ////printing array elements in order
}

int main(){
    // int arr[100],n,index=0;
    int arr[5] = {3,7,6,2,8};
    // cout<<"Enter size of an array:";
    // cin>>n;
    // cout<<"Enter array elements:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // print(arr,index,n);


    print(arr,4); //pass real index argument (n-1) 
    return 0;
}
