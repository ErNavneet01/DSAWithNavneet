 #include<iostream>
 using namespace std;
 int main(){
    int last=0,prev=1,curr;
    int n,i;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for(i=0;i<n;i++){
        cout<<last<<" ";
        curr=last+prev;
        last=prev;
        prev=curr;
    }
    return 0;
 }

