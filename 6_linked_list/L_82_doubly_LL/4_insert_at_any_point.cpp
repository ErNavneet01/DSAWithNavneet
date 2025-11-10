// 
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

Node* createDll(int arr[], int n, int index, Node* back){
 
    if(index == n){
        return NULL;
    }

    Node* temp = new Node(arr[index]);
    temp->prev = back;

    temp->next = createDll(arr,n,index+1,temp);
    return temp;

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    Node* head = NULL;
    Node* back = NULL;
    head = createDll(arr,6,0,back);

    // code for insert at middle
    int pos = 0;
    if(pos==0){
        if(head==NULL){
            head = new Node(5);
        }
        else{
            Node* temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else{
        Node* curr = head;
        while(--pos){
            curr = curr->next;
        }
        if(curr->next==NULL){
            Node* temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        else{
            Node* temp = new Node(5);
            temp->prev = curr;
            temp->next = curr->next;
            curr->next = temp;
            curr->next->prev = temp;
        }
    }

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