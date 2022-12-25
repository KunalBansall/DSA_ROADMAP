#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int h){
    int n1 = m-l+1 , n2 = h-m;
    int left[n1],right[n2];
    int i=0,j=0;
    for(;i<n1;i++){
        left[i]=arr[i+l];
    }
    for(;j<n2;j++){
        right[i]=arr[m+1+j];
    }
    int k=l;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            arr[k++]=left[i++];
        }
        else
        arr[k++]= right[j++];
    }
    while(i<n1)
    arr[k++]=left[i++];
    while(j<n2)
    arr[k++] =right[j++];

}
void mergeSort(int arr[],int l,int r){
   if(r>l){
    int m = l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);

   }
}
int main (){
    int n;
    cout<<" enter array size"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
   int l = arr[0];
   int r = arr[n-1];
    mergeSort(arr,l,r);
    for(int x: arr)
	    cout<<x<<" ";
}
