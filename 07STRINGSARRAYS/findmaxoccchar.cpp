#include<bits/stdc++.h>
using namespace std;
char GetMaxocc(string s){
    // 1. make array of 26
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        char ch = s[i];   // character ka array bnalege
        int number =0;
        number = ch -'a';   // ch -a se diffrence aajayega fiir hm uss idex ke block ko ++ kredeg
        arr[number]++; // use dbbe ka 0 se bdkrr ++ ho jayega
    }

    int maxi=-1; int ans =0;
    for(int i=0;i<26;i++){ // loop ko chlayege 26 tk
    if(maxi<arr[i]){
                ans=i; 
        maxi = arr[i]; // max se bda kch hua to max bhi vohi hojeyag aur uski idex lelege
    }
    }
    char  finalAns = 'a'+ ans; /// finally  ab us ++ hiye max vale index ko pluskrdege taaki ab vo charatxter aajaye 
    return finalAns;
    //thanku
}
int main (){
     string s;
     cout<<"enter the string"<<endl;
     cin>>s;
     cout<<GetMaxocc(s)<<endl;

}