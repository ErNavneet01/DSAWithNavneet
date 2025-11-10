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
    Node *head;
    head = NULL;   //we have to initialise head with null value
    int arr[] = {2,4,6,8,10};
    
    for (int i = 0; i < 5; i++)
    {
        // when head is null no element exist
        if (head == NULL)
        {
            head = new Node(arr[i]);
        }
        else
        {
            // when head is not null
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }
    // Displaying linked list elements
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    int k;
    cout<<"k:";
    cin>>k;
    // if k = 1
    if(k==1){
        cout<<"All nodes deleted possible";
        return 0;
    }
    int count = 1;
    Node* curr = head;
    Node* prev = NULL;
    while(curr!=NULL){
        if(count==k){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count=1;
        }
        else{
            prev = curr;
            curr = curr->next; 
            count++;   
        }
    }

    Node* temp1 = head;
    while(temp1!=NULL){
        cout<<temp1->data<<endl;
        temp1 = temp1->next;
    }

    return 0;
}