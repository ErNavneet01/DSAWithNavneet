// 
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
Node *createll(int arr[], int index, int size, Node *prev)
{
    if (index == size)
    {
        return prev;
    }

    Node *temp = new Node(arr[index]);
    temp->next = prev;

    return createll(arr, index + 1, size, temp);
}
Node* reverse(Node* curr, Node* prev){
    if(curr == NULL){
        return prev;
    }
    Node* front = curr->next;
    curr->next = prev;
    return reverse(front,curr);
}
int main()
{
    Node *first,*second;
    first = NULL;
    second = NULL;
    Node *prev = NULL;
    int arr[] = {4,8,6,7,9};
    int arr1[] = {8,3,4,6};

    first = createll(arr, 0, 5, prev);
    second = createll(arr1, 0, 4, prev);

    first = reverse(first,prev);
    second = reverse(second,prev);

    Node* curr1 = first;
    Node* curr2 = second;
    Node* head = new Node(0);   //dummy node is created 
    Node* tail = head;
    int carry =0;
    int sum = 0;

    while(curr1!=NULL && curr2!=NULL){
        sum  = curr1->data+curr2->data+carry;
        tail->next = new Node(sum%10);
        tail = tail->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
        carry = sum/10;  
    }

    while(curr1!=NULL){
        sum = curr1->data+carry;
        tail->next = new Node(sum%10);
        curr1 = curr1->next;
        carry = sum/10;
    }

    while(curr2!=NULL){
        sum = curr2->data+carry;
        tail->next = new Node(sum%10);
        curr2 = curr2->next;
        carry = sum/10;
    }

    while(carry!= 0){
        tail->next = new Node(carry);
        carry/=10;
    }

    head = head->next;
    head = reverse(head,NULL);
    

    // Display code
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }

    return 0;
}