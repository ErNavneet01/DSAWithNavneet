// Prefix sum

#include<iostream>
#include<vector>
using namespace std;

void prefix_sum(int arr[],int n){
    // int n = arr.size();
    
    vector<int>prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    for(int val : prefix) {
        cout << val << " ";
    }
    cout<<endl;
}
int main(){
    int n;
    int arr[100];
    cout<<"Entert size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    prefix_sum(arr,n);

    return 0;
}