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
    // insert at given position
    int x=3;
    int val = 30;
    Node *temp = head;
    x--;
    while(x--){
      temp = temp->next;  
    }
    Node* temp2 = new Node(val);
    temp2->next  = temp->next;
    temp->next = temp2;

    // Display code
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }

    return 0;
}