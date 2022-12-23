#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

bool isLoop(Node* head) 
{ 
   Node* slow = head,*fast=head;
   while(fast!=NULL&& fast->next!=NULL){
       slow= slow->next;
       fast=fast->next->next;
       if(slow == fast){
           return true;
       }
       
       
   }
   return false;
}

void print(Node * &head){
        Node * temp =head;

    while(temp != NULL){
    // Node * temp =head;
    cout<<temp->data<<" ";
    temp= temp->next;
}
}
int main() 
{ 
	Node *head=new Node(15);
	head->next=new Node(10);
	head->next->next=new Node(12);
	head->next->next->next=new Node(20);
	head->next->next->next->next=head->next;
//    print(head);
	if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop";
    //  print(head);
	return 0;
} 
