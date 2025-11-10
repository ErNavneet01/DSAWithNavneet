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
    int arr[] = {1,2,3,2,1};
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

    // PLAINDROME CODE
    if(head->next == NULL){
        cout<<"it is plaindrome";
    }
    int count = 0;
    temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    count/=2;
    Node* curr = head;
    Node* prev = NULL;
    while(count--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    // REVERSE code for 2nd linked list
    prev = NULL;
    Node* front = NULL;
    while(curr!=NULL){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    Node* head1 = head;
    Node* head2 = prev;
    while(head1!=NULL){
        if(head1->data != head2->data){
            cout<<"It is not plaindrome";
            break;
        }
        else{
            head1 = head1->next;
            head2 = head2->next;
            cout<<"IT is plaindrome";
            break;
        }
    }

    return 0;
}