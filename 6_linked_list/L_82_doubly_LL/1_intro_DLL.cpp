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

int main(){
    int arr[] = {2,4,5,7,8,9};
    Node* head;
    head = NULL;

    // INSERT AT START
    for(int i=0;i<6;i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node* temp = new Node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    

    // Print the doubly linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << "Prev: ";
        if (temp->prev) cout << temp->prev->data;
        else cout << " | NULL";

        cout << " | Data: " << temp->data << " | Next: ";

        if (temp->next) cout << temp->next->data;
        else cout << "NULL";

        cout << endl;

        temp = temp->next;
    }

    return 0;
}