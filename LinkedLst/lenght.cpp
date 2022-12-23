#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

int getLen(Node * head){
    // Node* temp= head ;
    int cnt =0;
     while (head!=NULL){
        cnt++;
        head= head->next;
     }
     return cnt;
}
void insertAthead(Node *& head,int d){
    Node * temp = new Node (d);
    temp->next = head;
    head = temp;

}
void Print(Node* &head){
    Node * temp=head;
    while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
Node *findMiddle(Node*&head){
    int len = getLen(head);
    int ans = len/2;
    Node*temp= head;
    int cnt =0;
    while(cnt<ans){
        temp=temp->next;

       cnt++;
          
    }
    return temp;

    // int cnt=0;
}

int main(){ 

      Node * node1 = new Node ( 10);
      Node* head   = node1;

insertAthead(head,9);
// Print(head);
insertAthead(head,8);

insertAthead(head,7);

insertAthead(head,6);
Print(head);
cout<<endl;


int ans = getLen(head);
// cout<<endl;
cout<<ans;
cout<<endl;
Node* value = findMiddle(head);
cout<<value->data;



}