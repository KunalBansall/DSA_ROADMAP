#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
    int data ;
    Node * next;

     Node(int data){
        this->data=data;
        this->next =NULL;
     }
     
     ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next= NULL;
        }
        cout<<" Node with value "<<value<<" is deleted"<<endl;
     }

    
};
void insertAthead(Node *& head,int d){
    Node * temp = new Node (d);
    temp->next = head;
    head = temp;

}
void insertAttail(Node *& tail,int d){
    Node * temp = new Node(d);
    tail->next=temp;
    tail= temp;


}
void print(Node * &head){
        Node * temp =head;

    while(temp != NULL){
    // Node * temp =head;
    cout<<temp->data<<" ";
    temp= temp->next;
}
}
void insertAtmid(Node*& tail, Node *& head,int pos,int d){
    if(pos==1){
        insertAthead(head,d);
        return ;
    }
     
     Node* temp = head;
     int cnt =1;
     while ((cnt<pos-1))
     {
        temp = temp->next;
        cnt++;
     }
     if(temp->next== NULL){
        insertAttail(tail,d);
        return;
     }
     Node* nodetoinsert = new Node(d);
     nodetoinsert->next=temp->next;
     temp->next = nodetoinsert;
     
     
}
void deletes(int position,Node *& head){
    if(position==1){
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else{

        Node* curr = head;
        Node* prev = NULL;
        
         int cnt=1;
         while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
         }
         prev->next= curr->next;
         curr->next=NULL;
         delete curr;
    }

      
}
bool iscircularList(Node*& head){
    //empty list
    if(head==NULL) { 
        return true;
    }
    Node * temp = head ->next;
    while ( temp!=NULL&&temp!=head){
        temp=temp->next;
        }

        if(temp==head){
            return true;
        }
        return false;
        
    

}
int main(){
    Node* Node1 = new Node(1);
    // cout<< Node1->data<<endl;
    // cout<<Node1->next<<endl;
    Node * head= Node1;
    Node* tail = Node1;

    insertAthead(head ,2);
    insertAttail(tail, 0);

    // print(head);
    cout<<endl;
    insertAtmid(tail,head,4,99);
    // print(head);
    // cout<<endl;
    // deletes(4,head);
    print(head);
    cout<<endl;
    cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;
    if(iscircularList(head)){
        cout<<"is cicular"<<endl;

    }
    else {
        cout<<" not a circular";
    }
    return 0;
}