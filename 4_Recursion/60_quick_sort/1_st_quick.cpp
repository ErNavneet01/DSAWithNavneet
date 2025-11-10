// 6 4 2 8 13 7 11 9 3 6
#include<iostream>
using namespace std;

int partitation(int arr[], int start, int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        // arr'[end] is pivot element
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int pivot = partitation(arr,start,end);
    // left part
    quicksort(arr,start,pivot-1);
    // right part
    quicksort(arr,pivot+1,end);
}
int main(){
    int arr[100],n,start,end;
    cout<<"Navneet Kumar 23BCS12619"<<endl;
    cout<<"Enter thr size of an arrar:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    start = 0;
    end = n-1;
    quicksort(arr,start,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
