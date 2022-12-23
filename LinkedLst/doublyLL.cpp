#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    //destructor
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory freed  "<<val<<endl;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int length(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
    cout << endl;
}
/// insert at head
void insertAthead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
// insert at head
void insertAttail(Node *&tail, Node *&head, int d)
{
    // cout<<" tail"<<tail<<endl;
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {

        Node *temp = new Node(d);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void Nodetoinsert(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAthead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while ((cnt < position - 1))
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAttail(tail, head, d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void deletes(int position,Node *& head,Node*& tail){
          Node*temp=head;

    if(position==1){
    //   Node*temp=head;
      temp->next->prev=NULL;
      head =temp->next;
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
        curr->prev =NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;

    }
  
}
int main()
{

    Node *node1 = new Node(23);
    Node *head = node1;
    Node *tail = node1;
    // print(head);
    // cout<<length(head)<<endl;

    insertAthead(head, tail, 33);
    //  print(head);
    insertAthead(head, tail, 43);
    //  print(head);
    insertAthead(head, tail, 53);
    //  print(head);
    insertAthead(head, tail, 63);
    // print(head);
    insertAttail(tail, head, 13);
    Nodetoinsert(tail, head, 1, 99);

    // print(head);
    // cout << "tail  " << tail->data << endl;
    // cout << "head   " << head->data << endl;
    // deletes(1,head);
        // deletes(4,head);

    print(head);
    deletes(7,head,tail);
    print(head);

  cout << "tail  " << tail->data << endl;
    cout << "head   " << head->data << endl;
    cout << length(head);
}