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

    Node* head1 = NULL;
    int arr1[] = {2,2,2,3,3,4,4};
    int n1;
    cout<<"n:";
    cin>>n1;
    for(int i=0;i<n1;i++){
        if(head1 == NULL){
            head1 = new Node(arr[i]);
        }
        else{
            Node *tail = head1;
            while(tail->next != NULL){
                tail = tail->next;
            }
            
            // Node *temp;
            // temp = new Node(arr[i]);
            // tail->next = temp;

            tail->next = new Node(arr[i]);
        }
    }

    Node *temp2 = head1;
    while (temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    cout<<endl;

    // Merge code
    Node* head2 = new Node(0);
    Node* tail = head2;
    while(head!=NULL && head1!=NULL){
        if(head->data < head1->data){
            tail->next = head;
            head = head->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else{
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
        }
    }
    
    // agr head me kuch node rah jaye ya phir head1 me kuch node rah jaye tab
    if(head!=NULL){
       tail->next = head; 
    }
    else{
        tail->next = head1;
    }
    tail = head2;
    head2 = head2->next;
    delete tail;
    

    

    // display node after remove duplicate node
    Node* temp = head2;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    
    
    return 0;
}