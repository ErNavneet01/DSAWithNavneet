// 3 4 -2 5 8 20 -10 50

#include<iostream>
#include<vector>
using namespace std;

void divide_array(int arr[], int n){
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    int half = total_sum/2;
    
    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i = 1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }

     for(int i = 0; i < n-1; i++) { // Check split point
        if(prefix[i] == half) {
            cout << "Array can be divided after index " << i << endl;
            cout << "First part: ";
            for(int j = 0; j <= i; j++) cout << arr[j] << " ";
            cout << "\nSecond part: ";
            for(int j = i+1; j < n; j++) cout << arr[j] << " ";
            cout << endl;
            return;
        }
    }

    cout << "No equal-sum split found." << endl;

}
int main(){
    int arr[100], n;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    divide_array(arr,n);

    return 0;
}
