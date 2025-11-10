// 
#include<iostream>
using namespace std;

// void incre(int *ptr){
//     *ptr = *ptr+1;
// }
// int main(){
//     int num = 10;
//     int temp = num;
//     incre(&num);
//     cout<<num;
//     return 0;
// }

// 1 2 3 4 5  print 2 4 6 8 10 using pointer in function

void doub(int *ptr){
    for(int i=0;i<5;i++){
        // ptr[i]=2*ptr[i];
        *ptr = 2* *(ptr+i);
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    doub(arr);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
