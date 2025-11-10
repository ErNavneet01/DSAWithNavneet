// 6 4 7 2 9 8 3 5  nlogn
#include<iostream>
#include<vector>

using namespace std;

void merge(int arr[],int st, int mid,int end){
    // create n vector to store the elements
    vector<int>temp(end-st+1);
   
    int left = st, right =mid+1;
    int index = 0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
        temp[index] = arr[left];
        left++,index++;
    }
    else{
        temp[index]=arr[right];
        index++,right++;
    }
        
    }
    

    // elements left in left array
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    // element keft in right array
    while(right<=end){
        temp[index]=arr[right];
        right++,index++;
    }

    // coping element from vector array to main array
    index = 0;
    while(st<=end){
        arr[st]=temp[index];
        st++,index++;
    }

}

void mergesort(int arr[],int st, int end){
     // base condition 
    if(st==end){
        return;
    }
    int mid = st+(end-st)/2;
    // left merge call
    mergesort(arr,st,mid);
    // right merge call
    mergesort(arr,mid+1,end);

    merge(arr,st,mid,end);
}

int main(){
    int arr[100],n,st,end;
    cout<<"Enter the size of an array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    st=0,end=n-1;
    mergesort(arr,st,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}