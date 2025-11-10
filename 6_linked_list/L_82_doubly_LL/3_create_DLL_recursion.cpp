#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

Node* createDLL(int arr[], int n, int index, Node *back){
    if(index == n){
        return NULL;
    }

    Node* temp = new Node(arr[index]);
    temp->prev = back;

    temp->next = createDLL(arr,n,index+1,temp);
    return temp;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    Node* head = NULL;
    Node*back = NULL;
    head = createDLL(arr,5,0,back);

    // Print the doubly linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << "Prev: ";
        if (temp->prev) cout << temp->prev->data;
        else cout << "NULL";

        cout << " | Data: " << temp->data << " | Next: ";

        if (temp->next) cout << temp->next->data;
        else cout << "NULL";

        cout << endl;

        temp = temp->next;
    }
    return 0;
}