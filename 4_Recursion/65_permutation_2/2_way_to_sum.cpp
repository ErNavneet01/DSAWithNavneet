// 
#include<iostream>
using namespace std;

int waystosum(int arr[],int m,int sum){
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        ans+=waystosum(arr,m,sum-arr[i]);
    }
    return ans;


}
int main(){
    int arr[20],m,sum;
    cout<<"m:";
    cin>>m;
    cout<<"sum:";
    cin>>sum;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cout<<waystosum(arr,m,sum);
    return 0;
}
