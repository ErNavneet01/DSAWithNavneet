#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // // create vector
    // vector<int>v;
    // // size and capacity
    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v:"<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(6);

    // cout<<"Size of v:"<<v.size()<<endl;
    // cout<<"Capacity of v:"<<v.capacity()<<endl;
    // // Update value
    // v[1]= 5;


//     vector<int>v1(5,1);
//     // size and capacity
//     cout<<"Size of v1:"<<v1.size()<<endl;
//     cout<<"Capacity of v1:"<<v1.capacity()<<endl;

//     v1.push_back(8);
//     // size and capacity
//     cout<<"Size of v1:"<<v1.size()<<endl;
//     cout<<"Capacity of v1:"<<v1.capacity()<<endl;
//     // delete value from vextor
//     v1.pop_back();
//     v1.erase(v1.begin()+2);
//     cout<<"Size of v1:"<<v1.size()<<endl;
//     cout<<"Capacity of v1:"<<v1.capacity()<<endl;
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
//     // insert value at any index
// // 1 20 1 1 1
//    v1.insert(v1.begin()+0,50);
//    for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
//     // clear is used to remove all elements
//     v1.clear();
//     cout<<"Size of v1:"<<v1.size()<<endl;
//     cout<<"Capacity of v1:"<<v1.capacity()<<endl;


//     // access elemet from any index
//     vector<int>arr;
//     arr.push_back(2);
//     arr.push_back(4);
//     arr.push_back(6);
//     arr.push_back(8);
// // print first element
//     cout<<arr[0]<<endl;
//     cout<<arr.front()<<endl;
// // to print last element
//     cout<<arr[arr.size()-1]<<endl;
//     cout<<arr.back()<<endl;

//     vector<int>a;
//     // copy value from ane vector to another
//     a=arr;
//     cout<<a.size()<<endl;
//     cout<<a.capacity()<<endl;
//     for(auto it = a.begin();it!=a.end();it++){
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//     // 2nd way to print vector
//     for(auto i:arr){
//         cout<<i<<" ";
//     }


    // sort an array
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    // sort in increasing order
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    //  // sort in decreasing order
    // sort(ans.begin(),ans.end(),greater<int>());

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    //  //2nd sort in decreasing order
    // sort(ans.rbegin(),ans.rend());

    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    // searching in binary search
    cout<<binary_search(ans.begin(),ans.end(),235)<<endl;
    // find the index of an element
    cout<<find(ans.begin(),ans.end(),54)-ans.begin();







    return 0;
}
