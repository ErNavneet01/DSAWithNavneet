// 9 7 5 1 3 6 8 2
#include<iostream>
using namespace std;

int maxelement(int arr[], int index, int n){
    if(index==n-1){
        return arr[index];
    }

    return max(arr[index],maxelement(arr,index+1,n));
}

int main(){
    int arr[100],n,index=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"mae element is:"<<maxelement(arr,index,n-1);
    return 0;
}
