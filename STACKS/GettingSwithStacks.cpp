#include <bits/stdc++.h>
#include <stack>
using namespace std;
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

int main(){

    stack <int> s;
    s.push(23);
    s.push(43);
    // s.pop();
    reverseStack(s);
    insertAtBottom(s,2);
    cout<<s.top()<<endl;

    // cout<<endl;
    // if(s.empty()){
    //     cout<<"empty";
    // }
    // else
    // cout<<"not empty"<<endl;
        reverseStack(s);
    cout<<s.top()<<endl;

    cout<<"size : "<<s.size()<<endl;
}