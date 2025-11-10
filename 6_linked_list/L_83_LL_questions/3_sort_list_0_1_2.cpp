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
    Node *head = NULL;
    int arr[] = {0,1,0,2,2,0,1};
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

    // sort Node 0,1,2
    Node* curr = head;
    int count0 = 0, count1= 0, count2 = 0;
    while(curr != NULL){
        if(curr->data == 0){
            count0++;
        }
        else if(curr->data == 1){
            count1++;
        }
        else{
            count2++;
        }
        curr = curr->next;
    }
    curr = head;
    while(count0--){
        curr->data =0;
        curr = curr->next;;
    }
    while(count1--){
        curr->data = 1;
        curr = curr->next;
    }
    while(count2--){
        curr->data = 2;
        curr = curr->next;
    }
    

    // display node after remove duplicate node
    temp1 = head;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1 = temp1->next;

    }
    
    
    return 0;
}