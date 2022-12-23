#include<bits/stdc++.h>
using namespace std ;

class Node {
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
         this->data =data;
         this->next = NULL;
    }
    
};
void insertAtHead(Node* &head,int d){
    // new node craeation
    Node *temp= new Node(d);
    temp->next=head;
    head =temp;


}
void insertAtTail(Node* &tail,int d){
    Node *temp = new Node(d);
    tail->next =temp;
    tail=temp;
}
void Print(Node* &head){
    Node * temp=head;
    while (temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
}
void NodetoInsert(Node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    
      Node* temp=head;
      int cnt =1;

      while(cnt< position-1){
        temp=temp->next;
        cnt++;
      }
    

      Node* nodetonsert = new Node(d);
      nodetonsert->next = temp->next;
      temp->next=nodetonsert;

}

int main(){
    Node* Node1 = new Node(33);
    // cout<<Node1->data<<endl;
    // cout<<Node1->next<<endl;
    Node * head =Node1;
    Node* tail = Node1;
    // Print(head);
    cout<<endl;

insertAtHead(head,22);
    insertAtTail(tail,23);
    // Print(head);
    // cout<<endl;

    // insertAtTail(tail,22);
    //  Print(head);
    //  NodetoInsert(head,4,9);
     Print(head);
     cout<<endl;
        //   NodetoInsert(head,2,9);
            //    Print(head);


    return 0;
}