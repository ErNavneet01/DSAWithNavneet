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
    int arr[] = {2, 4, 6, 8, 10,12};

    head = createll(arr, 0, 6, prev);
    // Display code
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data <<" ";
        temp1 = temp1->next;
    }
    cout<<endl;

    int count =0;
    Node *temp = head;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }

    count/=2;
    temp = head;
    while(count--){
        temp = temp->next;
    }
    cout<<temp->data<<" ";
    cout<<temp;



    return 0;
}