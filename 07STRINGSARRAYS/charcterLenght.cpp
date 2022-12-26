#include<bits/stdc++.h>
using namespace std;
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;

    }
    else{
        char temp =ch-'A'+ 'a';
        return temp;
    }
}
bool CheckPalidrome(char a [],int n){
   int s=0;
   int e=n-1;
     while (s<=e){
        if( toLowercase( a[s] )!= toLowercase( a[e] ) )
        {
            return 0;
        }
        else {
            s++;
            e--;

        }
     }
     return 1;
}
void ReverseStr(char name[],int n){
    int s=0;
    int e= n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLenght(char name[]){
    int cnt=0;
    for(int i=0;name[i] != '\0';i++){
        cnt++;
    }
    return cnt;
}
int main(){
     char name[20];
     cout<<"Enter the name : "<<endl;
     cin>>name;
    //  name[3]='\0';
     cout<<"Your name is : "<<name<<endl;
     int len=getLenght(name);
     cout<<"No. of characters in your name is : "<<len<<endl;
     ReverseStr(name,len);
     cout<<"your  REVERSE name is: ";

     cout<<name<<endl;
     cout<<"Palindrome or not  :->"<<CheckPalidrome(name,len)<<endl;


     return 0;
}