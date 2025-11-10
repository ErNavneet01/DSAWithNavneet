// Input:
// n = 3
// arr = [1, 2, 3]

// Output:
// 6 3 4 1 5 2 3 0
#include<iostream>
#include<vector>
using namespace std;

void subsequencesum(int arr[], int index, int n,int sum,vector<int>sub){
    // if(index==n){
    //     cout<<sum<<" ";
    //     return;
    // }

    // print element also
    if(index==n){
        for(int i=0;i<sub.size();i++){
            cout << sub[i];
            // if(i+1<sub.size()) cout << ",";
        }
        cout<<"->"<<sum << endl;
        return ;
    }

    
    
    // yes
    sub.push_back(arr[index]);
    subsequencesum(arr,index+1,n,sum+arr[index],sub);
    // no
    subsequencesum(arr,index+1,n,sum,sub);
}
int main(){
    int arr[] = {1,2,3};
    vector<int>sub;
    subsequencesum(arr,0,3,0,sub);
    return 0;
}
