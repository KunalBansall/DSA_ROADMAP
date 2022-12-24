// staack using ARRAY.
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        else
        {
            cout << "stack is full" << endl;
            
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack is empty";
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(23);
    st.push(24);
    // st.push(25);
    // st.pop();
    // st.pop();

    // st.pop();

    cout << st.peek() << endl;
    // if(st.isEmpty()){
    //     cout<<"Stack is Empty mere dost"<<endl;

    // }
    // else{
    //     cout<<"not empty"<<endl;

    // }
    // st.peek();
}