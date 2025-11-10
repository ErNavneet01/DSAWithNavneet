#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

Node* createDLL(int arr[], int n, int index, Node* back){
    if(n==index){
        return NULL;
    }

    Node* temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr,n,index+1,temp);
    return temp;
}

int main(){
    Node* head = NULL;
    Node* back = NULL;
    int arr[] = {2,3,4,5,6,7,8};
    head = createDLL(arr,7,0,back);

    Node* temp = head;
    while(temp!=NULL){
        cout<<"prev:";
        if(temp->prev)
        cout<<temp->prev->data<<"|";
        else
        cout<<"NULL |";

        cout<<"data:";
        cout<<temp->data<<"|";

        cout<<"next:";
        if(temp->next)
        cout<<temp->next->data<<"|";
        else
        cout<<"NULL";

        cout<<endl;

        temp=temp->next;
    }

    // delete at given position node
    int pos = 1;
    
    // delete first node
    if(pos==1){
        if(head==NULL){
        cout<<"Node does not exist";
        }
        else{
          Node* temp = head;
            if(temp->next){
                temp->next->prev = temp->prev;
            }
            
            head = head->next;
            delete temp;
        }
    }
    else{
        Node* curr = head;
        while(--pos){
            curr = curr->next;
        }
        if(curr->next == NULL){
            // delete last node
            curr->prev->next = NULL;
            delete curr;

        }
        else{
            // delete at given position
            curr->next->prev = curr->prev;
            curr->prev->next = curr->next;
            delete curr;   
        }

    }
    

    cout<<"deleted node:"<<endl;
    temp=head;
    while(temp!=NULL){
        cout<<"prev:";
        if(temp->prev)
        cout<<temp->prev->data<<"|";
        else
        cout<<"NULL|";

        cout<<"data:";
        cout<<temp->data<<"|";

        cout<<"next:";
        if(temp->next)
        cout<<temp->next->data<<"|";
        else
        cout<<"NULL";

        cout<<endl;

        temp=temp->next;
    }

    return 0;
}