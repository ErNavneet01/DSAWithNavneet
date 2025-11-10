#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
int main()
{
    Node *head = NULL;
    int arr[] = {2,2,2,3,3,4,4};
    int n;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node *tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            
            // Node *temp;
            // temp = new Node(arr[i]);
            // tail->next = temp;

            tail->next = new Node(arr[i]);
        }
    }

    Node *temp1 = head;
    while (temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<endl;

    // remove duplicate Node
    Node* curr = head->next;
    Node* prev = head;
    while(curr!=NULL){
        if(curr->data == prev->data){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        }
    }

    // display node after remove duplicate node
    temp1 = head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;

    }
    
    
    return 0;
}