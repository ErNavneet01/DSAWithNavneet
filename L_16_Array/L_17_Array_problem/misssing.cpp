#include<iostream>
using namespace std;

int main(){
 
    int arr[5] = {1,2,4,5};
    
    int sum = 0;
    int sum2=0;
    
// sum the element of an array
    for(int i=0;i<4;i++){
        sum = sum +arr[i];
    }
    cout<<sum<<endl;
    // Sum number of elements
    for(int i=1;i<=5;i++){
        sum2 = sum2+i;
    }
    cout<<"Sum2 is:"<<sum2<<endl;

    sum2 = sum2-sum;
    cout<<"The missing number is:"<<sum2;

    return 0;
}