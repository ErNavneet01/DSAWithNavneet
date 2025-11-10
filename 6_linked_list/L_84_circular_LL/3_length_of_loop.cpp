// 
// 
#include <iostream>
#include<vector>
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
    Node *head = NULL;
    int arr[] = {2,4,6,8,10};
    int n;
    cout<<"n:";
    cin>>n;
    for(int i=0;i<n;i++){
        if(head == NULL){
            head = new Node(arr[i]);
        }
        else{
            Node *tail = head;
            while(tail->next != NULL){
                tail = tail->next;
            }
            
            // Node *temp;
            // temp = new Node(arr[i]);
            // tail->next = temp;

            tail->next = new Node(arr[i]);
        }
    }

    Node *temp1 = head;
    while (temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
    cout<<endl;
    
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            break;
        }
    }
    
    if(fast == NULL || fast->next == NULL){
        cout<< 0;
    }
    int count = 1;
    slow = fast->next;
    while(slow!=fast){
        count++;
        slow = slow->next;
    }
    
    
    
    return 0;
}