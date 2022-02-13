#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
//base case
  if(n==0 or n==1){
    return true;
  }
//recusrsive case
  if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
    return true;
  }
 return false;
}
int main(){
 int arr[]={1,2,5,8,9};
 int n=sizeof(arr)/sizeof(int);
 cout<<isSorted(arr,n);
 return 0;
}