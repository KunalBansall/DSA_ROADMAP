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

int main(){
    Node* Node1 = new Node(33);
    cout<<Node1->data<<endl;
    cout<<Node1->next<<endl;


}