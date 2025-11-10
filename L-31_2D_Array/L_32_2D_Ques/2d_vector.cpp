// creation of 2D vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // create 2D vector
    // vector<vector<int> >matrix(3,vector<int>(4,1));

    // for(int i=0;i<matrix.size();i++){
    //     for(int j=0;j<matrix[0].size();j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Rows :"<<matrix.size()<<endl;
    // cout<<"Columns:"<<matrix[0].size();

    // user input
    int n,m;
    cout<<"Enter rows and cols:";
    cin>>n>>m;
    vector<vector<int> >matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    



    return 0;
}

