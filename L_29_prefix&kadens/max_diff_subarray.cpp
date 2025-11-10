// 9 5 8 12 2 3 7 4
// 0 1 2  3 4 5 6 7

#include<iostream>
using namespace std;

int max_differ(int arr[], int n){
    
    int differ = INT8_MIN;
    int suffix = arr[n-1];
    for(int i =n-2;i>=0;i--){
        
        differ = max(differ,suffix- arr[i]);
        suffix = max(suffix,arr[i]);
        cout<<suffix<<" ";

    }
    cout<<endl;
    return differ;
}
int main(){
    int arr[100], n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<max_differ(arr,n);

    return 0;
}
