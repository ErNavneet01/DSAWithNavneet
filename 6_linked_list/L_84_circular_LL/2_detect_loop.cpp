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

// bool check(vector<Node*>&visit, Node* curr){
//     for(int i=0;i<visit.size();i++){
//         if(curr==visit[i]){
//             return 1;
//         }
        
//     }
//     return 0;
// }
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

    // METHOD 1
    // // detect loop in ll
    // Node* curr = head;
    // vector<Node*> visit;

    // while(curr!=NULL){
    //     if(check(visit,curr)){
    //         cout<<1;
    //         break;
    //         visit.push_back(curr);
    //         curr = curr->next;
    //     }
    //     else{
    //         cout<<0;
    //         break;
    //     }
    // }

    // METHOD 2
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cout<<"Loop detected";
            break;
        }
        else{
            cout<<"Loop does not detected";
            break;
        }
    }
    
    
    return 0;
}