#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};
Node* createll(int arr[], int index, int size){
    if(index==size){
        return NULL;
    }

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = createll(arr,index+1,size);

    return temp;
}
int main(){
    Node* head;
    head = NULL;
    int x=3;
    int arr[] = {2,4,6,8,10};

    head = createll(arr,0,5);

    // delete a particular node
    if(x==1){
        Node*temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node *curr = head;
        Node* prev = NULL;
        x--;
        while(x--){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    // Display code
    Node* temp1 = head;
    while (temp1 != NULL)
    {
        cout<<temp1->data<<endl;
        temp1=temp1->next;
    }
    

    return 0;
}