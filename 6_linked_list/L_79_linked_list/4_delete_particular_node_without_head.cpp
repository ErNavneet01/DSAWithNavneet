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
    int arr[] = {2, 4, 6, 8, 10};

    head = createll(arr, 0, 5, prev);

    Node* curr = head->next->next;
    if(curr == NULL || curr->next == NULL){
        cout<<"Not Possible";
    }
    else{
        Node* temp = curr->next;
        curr->data = temp->data;
        curr->next = temp->next;
        delete temp;
    }

    // Display code
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }

    return 0;
}