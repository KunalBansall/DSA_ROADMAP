#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack oveflow" << endl;
        }
    }
    int pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack empty" << endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
bool isEmpty(){
        if(top==-1){
            return true;
        }
        else 
        false;
    }
    
};
void  insertAtBottom(stack<int> &s,int num){
   if(s.empty()){
       s.push(num);
       return;
   }
    int x = s.top();
    s.pop();
    insertAtBottom(s,num);
    s.push(x);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtBottom(stack,num);
    
}
int main (){

    Stack st(5);
    st.push(11);
    
    st.push(122);
    reverseStack();
    insertAtBottom(st,2);
//   cout<<st.peek()<<endl;
//   st.pop();
//     cout<<st.peek()<<endl;
 
//  if(st.isEmpty()){
//     cout<<"stack is Empty"<<endl;
//  }
//  else {
//     cout<<"not empty"<<endl;
//  }
//  st.isEmpty();

}