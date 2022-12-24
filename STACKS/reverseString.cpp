#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    string s = "KUNAL";
    stack <char> st;

    for(char x: s){
        st.push(x);
    }
    string ans = " ";

    while(!st.empty()){
        char ch  = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout<<"reversed string "<<ans<<endl;
    return 0;

}