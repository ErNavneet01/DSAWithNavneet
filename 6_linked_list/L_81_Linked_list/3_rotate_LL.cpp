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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
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

    // ROTATE LIST
    int k=2;
    if(head==NULL || head->next==NULL){
        cout<<"rotation is not possible";
    }
    int count =0;
    temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    // cout<<count;
    k=k%count;
    count-=k;
    if(k==0){
        cout<<"rotation is not possible";
    }
    Node* curr = head;
    Node* prev = NULL;
    while(count--){
        prev = curr;
        curr= curr->next;
    }
    prev->next = NULL;
    Node* tail = curr;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = head;
    head = curr;

    // diplay node after rotation
    Node* tamp2 = head;
    while(tamp2!=NULL){
        cout<<tamp2->data<<" ";
        tamp2 = tamp2->next;
    }
    

    return 0;
}