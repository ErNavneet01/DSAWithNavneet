#include<iostream>
using namespace std;

int main(){
    int arr[7]={11,22,13,12,14,15,18};
    int max1= arr[0];
    int max2=INT16_MIN;
    for(int i=0;i<7;i++){
        if(max1<arr[i]){
            max1 = arr[i];

        }
    }
    cout<<"1st max ele:"<<max1<<endl;

    for(int i=0;i<7;i++){
        if(max1!=arr[i]){
            for(int i=0;i<7;i++){
            max2=arr[i];

            }
        }
    }
    cout<<max2;



    // 2nd method
    // int arr[7]={11,22,13,12,14,15,18};
    // int ans=INT16_MIN;
    // int max2 = INT16_MIN;
    // for(int i=0;i<7;i++){
    //     if(ans<arr[i]){
    //         ans = arr[i];
    //     }
    // }

    // for(int i=0;i<7;i++){
    //     if(ans!=arr[i]){
    //         max2 = max(max2,arr[i]);
    //     }
    // }
    // cout<<ans<<endl;
    // cout<<max2;


    return 0;
}