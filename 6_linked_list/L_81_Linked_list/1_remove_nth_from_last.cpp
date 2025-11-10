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
    head = NULL; // we have to initialise head with null value
    int arr[] = {2, 4, 6, 8, 10};

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
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    // remove nth element from last
    int n = 5;
    int count = 0;
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->next;
    }

    count -= n;
    // when count is zero or remove first node of linked list
    if (count == 0)
    {
        temp1 = head;
        head = head->next;
        delete temp1;
    }
    else{
        Node *curr = head;
        Node *prev = NULL;
        while (count--)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }

    // print value after deletion
    Node *temp2 = head;
    while (temp2 != NULL)
    {
        cout << temp2->data << endl;
        temp2 = temp2->next;
    }

    return 0;
}