#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
        
    }
};

int main(){
    int arr[] = {2,4,5,6,78,90};
    Node* head = NULL;

    for(int i=0;i<6;i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node* curr = head;
            while(curr->next!=NULL){
                curr = curr->next;
            }
            Node* temp = new Node(arr[i]);
            curr->next = temp;
            temp->prev = curr;
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