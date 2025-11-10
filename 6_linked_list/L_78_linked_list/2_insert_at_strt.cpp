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

    return 0;
}