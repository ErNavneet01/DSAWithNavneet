#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int i=1,n;
    cout<<"Enter n:";
    cin>>n;
    do
    {
        sum=sum+i;
        i++;
        /* code */
    } while (i<=n);
    cout<<"Sum is:"<<sum;
    return 0;
}