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
    ~Node()
    {
        int val = data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory freed with  value " << val << endl;
    }
};

void insertatNode(Node *&tail, int element, int d)
{
    //// at entry or first elemnt;
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    if(tail== NULL){
        cout<<" list is empty"<<endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
    return;
}
void deletingNode(Node *&tail, int d)
{
    if (tail == NULL)
    {
        cout << " Please check again This is empty list " << endl;
        return;
    }
    else
    {
        // non empty
        // vlaue present in linked list
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != d)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        // one nodde of Linked list
         if(curr == prev)
        {
            tail = NULL;
        }
        //more than one 
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
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
int main()
{
    Node *tail = NULL;
    // insertatNode(tail, 5, 9);
    // // print(tail);
    // insertatNode(tail, 9, 1);
    // // print(tail);
    // insertatNode(tail, 1, 10);
    // // print(tail);
    // insertatNode(tail, 10, 31);
    // // print(tail);
    insertatNode(tail, 31, 913);
    // // print(tail);
    insertatNode(tail, 913, 22);
    // // print(tail);
    // // cout<<"tail : "<< tail->data<<endl;

    insertatNode(tail, 913, 76);
    print(tail);
    if(iscircularList(tail)){
        cout<<" linked list is circular in nature"<<endl;
    }
    else{
        cout<<" not a circular"<<endl;
    }
    // deletingNode(tail, 9);
    // print(tail);
    // deletingNode(tail, 76);
    // print(tail);
    // deletingNode(tail, 76);
    // print(tail);
    return 0;
}