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
int main()
{
    Node *head;
    head = NULL;
    Node *prev = NULL;
    int arr[] = {17,11,9,5,7,8,6,4,3,2};

    head = createll(arr, 0, 10, prev);
    int k = 4;

    Node* first = new Node(0);
    first->next = head;
    head = first;
    while(first->next != NULL){
        Node* second = first->next;
        Node* prev = first;
        Node* curr = second;
        int x = k;
        while(x && curr){
            Node* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
            x--;
        }
        first->next = prev;
        second->next = curr;
        first = second;
    }

    first = head;
    head = head->next;
    delete first;
    

    // Display code
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }

    return 0;
}