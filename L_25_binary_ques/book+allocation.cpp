#include<iostream>
using namespace std;

int book_allocate(int arr[], int n, int m){

    int start = 0, end = 0, mid, ans=-1;
    if(m>n){
        return -1;
    }
    for(int i=0;i<n;i++){
        start = max(start,arr[i]);
        end+=arr[i];
    }

    while(start<=end){
        mid = start + end - start/2;
        int pages = 0, count =1;
        for(int i=0;i<n;i++){
            pages += arr[i];
            if(pages>mid){
                count++;
                pages=arr[i];
            }
        }
        if(count<=m){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;

}
int main(){
    int n, arr[100], m;
    cout<<"Enter the size of an array:";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter m:";
    cin>>m;

    cout<<book_allocate(arr,n,m);


    return 0;
}

